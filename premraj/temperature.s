	.file	"temperature.c"
	.section	.rodata
.LC0:
	.string	"\n%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	call	getchar
	movb	%al, -5(%rbp)
	jmp	.L2
.L3:
	movsbl	-5(%rbp), %eax
	movl	%eax, %edi
	call	putchar
	call	getchar
	movb	%al, -5(%rbp)
	addl	$1, -4(%rbp)
.L2:
	cmpb	$-1, -5(%rbp)
	jne	.L3
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
