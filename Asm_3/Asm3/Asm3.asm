.586P
.model flat, stdcall
includelib kernel32.lib

ExitProcess PROTO :DWORD
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD

.STACK 4096

.CONST

.DATA

Arr BYTE 1, 2, 3, 4, 5, 6, 0
myBytes BYTE 10h, 20h, 30h, 40h
MB_OK	EQU 0
STR1 DB "Гвоздовский Кирилл 2 курс 6 группа", 0
STR2 DB "Нулевые элементы есть", 0
STR3 DB "Нулевых элементов нет", 0
HW		DD ?


.CODE

main PROC

START:
	
	mov ESI, OFFSET myBytes
	mov AH, [ESI]
	mov AL, [ESI + 2]

	xor EAX, EAX
	xor EBX, EBX


	add AL, [Arr]
	add AL, [Arr + 1]
	add AL, [Arr + 2]
	add AL, [Arr + 3]
	add AL, [Arr + 4]
	add AL, [Arr + 5]
	add AL, [Arr + 6]

	xor EAX, EAX
	mov ECX, LENGTHOF Arr
	mov EBX, 1

CYCLE:
	cmp [Arr + EAX], 0
	je TRUE
	jne FALSE

TRUE:
	mov EBX, 0
	invoke MessageBoxA, HW, OFFSET STR2, OFFSET STR1, MB_OK
	jmp ENDOFCYCLE

FALSE:
	add EAX, 1
	loop CYCLE

ENDOFCYCLE:

	cmp EBX, 1
	je CHECKF
	jne CHECKT

CHECKF:
	invoke MessageBoxA, HW, OFFSET STR3, OFFSET STR1, MB_OK

CHECKT:


	push 0
	CALL ExitProcess

main ENDP
end main