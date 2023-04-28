section .data
	msg db 'Hello, Holberton', 0Ah ; Message to print

section .text
	global main

main:
	push rbp	; Setup stack frame
	mov rbp, rsp
	mov rdi, msg	; Load address of message into rdi
	xor eax, eax 	; Clear eaz to indicate suxxess
	call printf	; Call the C printf function
	mov rsp, rbp	; Restore stack pointer
	pop rbp		; Tear down stack frame
	ret		; Return to the operating system
