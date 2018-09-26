	.file	"matrix.c"
	.section	.rodata
	.align 8
.LC0:
	.string	"\n enter elements into first matrix"
.LC1:
	.string	"%2d"
	.align 8
.LC2:
	.string	"\n enter elements into second matrix"
.LC3:
	.string	"%2d "
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
	subq	$144, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$0, -144(%rbp)
	jmp	.L2
.L5:
	movl	$0, -140(%rbp)
	jmp	.L3
.L4:
	leaq	-128(%rbp), %rax
	movl	-140(%rbp), %edx
	movslq	%edx, %rdx
	movl	-144(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	%rcx, %rcx
	addq	%rcx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -140(%rbp)
.L3:
	cmpl	$1, -140(%rbp)
	jle	.L4
	addl	$1, -144(%rbp)
.L2:
	cmpl	$2, -144(%rbp)
	jle	.L5
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$0, -144(%rbp)
	jmp	.L6
.L9:
	movl	$0, -140(%rbp)
	jmp	.L7
.L8:
	leaq	-96(%rbp), %rax
	movl	-140(%rbp), %edx
	movslq	%edx, %rdx
	movl	-144(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -140(%rbp)
.L7:
	cmpl	$3, -140(%rbp)
	jle	.L8
	addl	$1, -144(%rbp)
.L6:
	cmpl	$1, -144(%rbp)
	jle	.L9
	movl	$0, -144(%rbp)
	jmp	.L10
.L13:
	movl	$10, %edi
	call	putchar
	movl	$0, -140(%rbp)
	jmp	.L11
.L12:
	movl	-140(%rbp), %eax
	cltq
	movl	-144(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movl	-128(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -140(%rbp)
.L11:
	cmpl	$1, -140(%rbp)
	jle	.L12
	addl	$1, -144(%rbp)
.L10:
	cmpl	$2, -144(%rbp)
	jle	.L13
	movl	$0, -144(%rbp)
	jmp	.L14
.L17:
	movl	$10, %edi
	call	putchar
	movl	$0, -140(%rbp)
	jmp	.L15
.L16:
	movl	-140(%rbp), %eax
	cltq
	movl	-144(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	-96(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -140(%rbp)
.L15:
	cmpl	$3, -140(%rbp)
	jle	.L16
	addl	$1, -144(%rbp)
.L14:
	cmpl	$1, -144(%rbp)
	jle	.L17
	movl	$0, -144(%rbp)
	jmp	.L18
.L23:
	movl	$0, -140(%rbp)
	jmp	.L19
.L22:
	movl	$0, -132(%rbp)
	movl	$0, -136(%rbp)
	jmp	.L20
.L21:
	movl	-136(%rbp), %eax
	cltq
	movl	-144(%rbp), %edx
	movslq	%edx, %rdx
	addq	%rdx, %rdx
	addq	%rdx, %rax
	movl	-128(%rbp,%rax,4), %edx
	movl	-140(%rbp), %eax
	cltq
	movl	-136(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	-96(%rbp,%rax,4), %eax
	imull	%edx, %eax
	addl	%eax, -132(%rbp)
	addl	$1, -136(%rbp)
.L20:
	cmpl	$1, -136(%rbp)
	jle	.L21
	movl	-140(%rbp), %eax
	cltq
	movl	-144(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rax, %rdx
	movl	-132(%rbp), %eax
	movl	%eax, -64(%rbp,%rdx,4)
	addl	$1, -140(%rbp)
.L19:
	cmpl	$3, -140(%rbp)
	jle	.L22
	addl	$1, -144(%rbp)
.L18:
	cmpl	$2, -144(%rbp)
	jle	.L23
	movl	$0, -144(%rbp)
	jmp	.L24
.L27:
	movl	$10, %edi
	call	putchar
	movl	$0, -140(%rbp)
	jmp	.L25
.L26:
	movl	-140(%rbp), %eax
	cltq
	movl	-144(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -140(%rbp)
.L25:
	cmpl	$3, -140(%rbp)
	jle	.L26
	addl	$1, -144(%rbp)
.L24:
	cmpl	$2, -144(%rbp)
	jle	.L27
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L28
	call	__stack_chk_fail
.L28:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
