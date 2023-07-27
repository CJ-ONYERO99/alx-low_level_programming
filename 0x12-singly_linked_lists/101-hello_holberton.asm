section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    global main

extern printf, exit

main:
    ; Call printf function with the address of hello string and format specifier
    mov rdi, format
    mov rsi, hello
    xor rax, rax    ; Clear RAX register
    call printf

    ; Exit the program
    xor edi, edi
    call exit

section .bss
    resb 1   ; Placeholder for exit function
