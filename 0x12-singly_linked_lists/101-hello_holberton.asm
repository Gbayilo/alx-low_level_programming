section .data
    hello_message db "Hello, Holberton",10,0  ; The message to print, with a newline character and null terminator

section .text
    global main

extern printf
global _start

_start:
    push rbp              ; Save the base pointer
    mov rdi, hello_message  ; Load the address of the message into rdi
    call printf            ; Call printf
    pop rbp               ; Restore the base pointer

    ; Exit the program
    mov rax, 60           ; syscall number for exit
    xor rdi, rdi          ; exit status 0
    syscall

section .bss
    ; Define any uninitialized data here if needed

