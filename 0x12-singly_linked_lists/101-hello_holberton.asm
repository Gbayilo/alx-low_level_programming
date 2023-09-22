section .data
	hello_message db "Hello, Holberton",0
	fmt db '%s', 10, 0

section .text
	global main

extern printf

main:
	push rbp              
	mov rbp, rsp

	mov rdi, fmt
	mov rsi, hello
	xor rax, rax
	call printf

	xor eax, eax
	mov rsp, rbp
	pop rbp
	ret


