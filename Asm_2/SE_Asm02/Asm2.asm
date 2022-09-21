.586P													;система команд (процессор Pentium)
.MODEL FLAT, STDCALL									;модель памяти, соглашение о вызовах
includelib kernel32.lib									;компановщику: компоновать с kernel32

ExitProcess PROTO : DWORD								;прототип функции для завершения процесса Windows
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD	;прототип API-функции MessageBoxA (вывод в окно)

.STACK 4096												;выделение стека объемом 4 мегабайта

.DATA													;сегмент данных
		a dd 1							
		b dd 2
		str0 db "Result", 0								
		str1 db "Результат = < >", 0


.CODE													;сегмент кода
main PROC												;точка входа main
start:													;метка
		mov eax, a
		add eax, b
		add eax, 30h
		
		mov str1+13, al									;младшая половина подрегистра
		
		invoke MessageBoxA, 0, offset str1, offset str0, 0

		push 0											;код возврата процесса Windows (параметр ExitProcess)
		call ExitProcess								;так завершается любой процесс Windows

main ENDP												;конец процедуры

end main