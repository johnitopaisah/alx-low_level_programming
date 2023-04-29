; Comments: My first hand on assecly language
; File: 101-hello)holberton.asm
; Author: John I. Isah
; Description; A 64-bit assembly program that prints Hello,
;		Holberton and its followed by a new line.

extern printf

section .text
	global main

main:
	push rbp	; Setup stack frame

	mov rdi, fmt
	mov rsi, msg
	mov rax, 0
	call printf

	pop rbp

	mov rax, 0
	ret

section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

;	xor eax, eax 	; Clear eaz to indicate suxxess
;	call printf	; Call the C printf function
;	mov rsp, rbp	; Restore stack pointer
;	pop rbp		; Tear down stack frame
;	ret		; Return to the operating system
