global main
extern printf

section .data
    format db 'Hello, Holberton',0

section .text
main:
    mov edi, format   ; Load the format string address into edi
    call printf       ; Call the printf function
    xor eax, eax      ; Clear eax to prepare for return value
    ret

