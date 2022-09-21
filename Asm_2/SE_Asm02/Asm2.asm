.586P													;������� ������ (��������� Pentium)
.MODEL FLAT, STDCALL									;������ ������, ���������� � �������
includelib kernel32.lib									;������������: ����������� � kernel32

ExitProcess PROTO : DWORD								;�������� ������� ��� ���������� �������� Windows
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD	;�������� API-������� MessageBoxA (����� � ����)

.STACK 4096												;��������� ����� ������� 4 ���������

.DATA													;������� ������
		a dd 1							
		b dd 2
		str0 db "Result", 0								
		str1 db "��������� = < >", 0


.CODE													;������� ����
main PROC												;����� ����� main
start:													;�����
		mov eax, a
		add eax, b
		add eax, 30h
		
		mov str1+13, al									;������� �������� �����������
		
		invoke MessageBoxA, 0, offset str1, offset str0, 0

		push 0											;��� �������� �������� Windows (�������� ExitProcess)
		call ExitProcess								;��� ����������� ����� ������� Windows

main ENDP												;����� ���������

end main