section .data
    hello_message db "Hello, Holberton", 10, 0 ; 10 is newline character and 0 is null-terminator

section .text
    extern printf

    global main
main:
    ; Stack alignment
    push rbp
    mov rbp, rsp
    and rsp, -16

    ; Prepare the arguments for printf
    mov rdi, hello_message  ; 1st argument: pointer to format string
    
    ; Call printf
    call printf

    ; Restore the stack and exit
    mov rsp, rbp
    pop rbp
    ret

