section .data
    hello_message db "Hello, Holberton",10,0  ; The message to print, with a newline character and null terminator

section .text
    global main

extern printf

main:
    push rbp              ; Save the base pointer
    mov rdi, hello_message  ; Load the address of the message into rdi
    call printf            ; Call printf
    pop rbp               ; Restore the base pointer
    ret                   ; Return

section .bss
    ; Define any uninitialized data here if needed

