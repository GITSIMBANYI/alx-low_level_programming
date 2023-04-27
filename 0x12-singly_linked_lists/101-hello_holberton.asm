section .data
    hello db 'Hello, Holberton', 0
    fmt db '%s\n', 0

section .text
    global _start

_start:
    ; push arguments for printf onto the stack
    push qword fmt
    push qword hello
    call printf
    
    ; clean up the stack
    add rsp, 16
    
    ; exit the program
    mov eax, 0
    ret
