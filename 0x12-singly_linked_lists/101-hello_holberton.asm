	SECTION .data
msg:	db "Hello, HOlberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0

	mov eax, 0
	ret
