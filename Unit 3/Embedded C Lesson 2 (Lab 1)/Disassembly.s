
learn-in-depth.elf:     file format elf32-littlearm


Disassembly of section .startup:

00010000 <reset>:
   10000:	e3a0da11 	mov	sp, #69632	; 0x11000
   10004:	eb000000 	bl	1000c <main>

00010008 <stop>:
   10008:	eafffffe 	b	10008 <stop>

Disassembly of section .text:

0001000c <main>:
   1000c:	e92d4800 	push	{fp, lr}
   10010:	e28db004 	add	fp, sp, #4
   10014:	e59f0004 	ldr	r0, [pc, #4]	; 10020 <main+0x14>
   10018:	eb000001 	bl	10024 <Uart_Send_String>
   1001c:	e8bd8800 	pop	{fp, pc}
   10020:	00010074 	andeq	r0, r1, r4, ror r0

00010024 <Uart_Send_String>:
   10024:	e52db004 	push	{fp}		; (str fp, [sp, #-4]!)
   10028:	e28db000 	add	fp, sp, #0
   1002c:	e24dd00c 	sub	sp, sp, #12
   10030:	e50b0008 	str	r0, [fp, #-8]
   10034:	ea000006 	b	10054 <Uart_Send_String+0x30>
   10038:	e59f3030 	ldr	r3, [pc, #48]	; 10070 <Uart_Send_String+0x4c>
   1003c:	e51b2008 	ldr	r2, [fp, #-8]
   10040:	e5d22000 	ldrb	r2, [r2]
   10044:	e5832000 	str	r2, [r3]
   10048:	e51b3008 	ldr	r3, [fp, #-8]
   1004c:	e2833001 	add	r3, r3, #1
   10050:	e50b3008 	str	r3, [fp, #-8]
   10054:	e51b3008 	ldr	r3, [fp, #-8]
   10058:	e5d33000 	ldrb	r3, [r3]
   1005c:	e3530000 	cmp	r3, #0
   10060:	1afffff4 	bne	10038 <Uart_Send_String+0x14>
   10064:	e28bd000 	add	sp, fp, #0
   10068:	e8bd0800 	ldmfd	sp!, {fp}
   1006c:	e12fff1e 	bx	lr
   10070:	101f1000 	andsne	r1, pc, r0

Disassembly of section .data:

00010074 <string_buffer>:
   10074:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   10078:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   1007c:	7065642d 	rsbvc	r6, r5, sp, lsr #8
   10080:	4f3a6874 	svcmi	0x003a6874
   10084:	69626172 	stmdbvs	r2!, {r1, r4, r5, r6, r8, sp, lr}^
	...

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002d41 	andeq	r2, r0, r1, asr #26
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000023 	andeq	r0, r0, r3, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0x109
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	Address 0x0000002c is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <stack_top+0x10bfc4c>
   4:	4e472820 	cdpmi	8, 4, cr2, cr7, cr0, {1}
   8:	34202955 	strtcc	r2, [r0], #-2389	; 0x955
   c:	322e372e 	eorcc	r3, lr, #12058624	; 0xb80000
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000068 	andeq	r0, r0, r8, rrx
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000017 	andeq	r0, r0, r7, lsl r0
  10:	00002801 	andeq	r2, r0, r1, lsl #16
  14:	00003c00 	andeq	r3, r0, r0, lsl #24
  18:	01000c00 	tsteq	r0, r0, lsl #24
  1c:	01002400 	tsteq	r0, r0, lsl #8
  20:	00000000 	andeq	r0, r0, r0
  24:	23010200 	movwcs	r0, #4608	; 0x1200
  28:	01000000 	mrseq	r0, (UNDEF: 0)
  2c:	000c0105 	andeq	r0, ip, r5, lsl #2
  30:	00240001 	eoreq	r0, r4, r1
  34:	00000001 	andeq	r0, r0, r1
  38:	03010000 	movweq	r0, #4096	; 0x1000
  3c:	00000052 	andeq	r0, r0, r2, asr r0
  40:	0000004b 	andeq	r0, r0, fp, asr #32
  44:	00004b04 	andeq	r4, r0, r4, lsl #22
  48:	05006300 	streq	r6, [r0, #-768]	; 0x300
  4c:	000e0704 	andeq	r0, lr, r4, lsl #14
  50:	01050000 	mrseq	r0, (UNDEF: 5)
  54:	00000008 	andeq	r0, r0, r8
  58:	002e0600 	eoreq	r0, lr, r0, lsl #12
  5c:	03010000 	movweq	r0, #4096	; 0x1000
  60:	0000003b 	andeq	r0, r0, fp, lsr r0
  64:	74030501 	strvc	r0, [r3], #-1281	; 0x501
  68:	00000100 	andeq	r0, r0, r0, lsl #2
  6c:	00000058 	andeq	r0, r0, r8, asr r0
  70:	005a0002 	subseq	r0, sl, r2
  74:	01040000 	mrseq	r0, (UNDEF: 4)
  78:	00000017 	andeq	r0, r0, r7, lsl r0
  7c:	00009f01 	andeq	r9, r0, r1, lsl #30
  80:	00003c00 	andeq	r3, r0, r0, lsl #24
  84:	01002400 	tsteq	r0, r0, lsl #8
  88:	01007400 	tsteq	r0, r0, lsl #8
  8c:	00003500 	andeq	r3, r0, r0, lsl #10
  90:	8e010200 	cdphi	2, 0, cr0, cr1, cr0, {0}
  94:	01000000 	mrseq	r0, (UNDEF: 0)
  98:	00240105 	eoreq	r0, r4, r5, lsl #2
  9c:	00740001 	rsbseq	r0, r4, r1
  a0:	002c0001 	eoreq	r0, ip, r1
  a4:	4e010000 	cdpmi	0, 0, cr0, cr1, cr0, {0}
  a8:	03000000 	movweq	r0, #0
  ac:	00000082 	andeq	r0, r0, r2, lsl #1
  b0:	004e0501 	subeq	r0, lr, r1, lsl #10
  b4:	91020000 	mrsls	r0, (UNDEF: 2)
  b8:	04040074 	streq	r0, [r4], #-116	; 0x74
  bc:	00000054 	andeq	r0, r0, r4, asr r0
  c0:	00080105 	andeq	r0, r8, r5, lsl #2
  c4:	00000000 	andeq	r0, r0, r0

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0c3f002e 	ldceq	0, cr0, [pc], #-184	; ffffff64 <stack_top+0xfffeee8c>
  18:	0b3a0e03 	bleq	e8382c <stack_top+0xe72754>
  1c:	0c270b3b 	stceq	11, cr0, [r7], #-236	; 0xffffff14
  20:	01120111 	tsteq	r2, r1, lsl r1
  24:	42960640 	addsmi	r0, r6, #64, 12	; 0x4000000
  28:	0300000c 	movweq	r0, #12
  2c:	13490101 	movtne	r0, #37121	; 0x9101
  30:	00001301 	andeq	r1, r0, r1, lsl #6
  34:	49002104 	stmdbmi	r0, {r2, r8, sp}
  38:	000b2f13 	andeq	r2, fp, r3, lsl pc
  3c:	00240500 	eoreq	r0, r4, r0, lsl #10
  40:	0b3e0b0b 	bleq	f82c74 <stack_top+0xf71b9c>
  44:	00000e03 	andeq	r0, r0, r3, lsl #28
  48:	03003406 	movweq	r3, #1030	; 0x406
  4c:	3b0b3a0e 	blcc	2ce88c <stack_top+0x2bd7b4>
  50:	3f13490b 	svccc	0x0013490b
  54:	000a020c 	andeq	r0, sl, ip, lsl #4
  58:	11010000 	mrsne	r0, (UNDEF: 1)
  5c:	130e2501 	movwne	r2, #58625	; 0xe501
  60:	1b0e030b 	blne	380c94 <stack_top+0x36fbbc>
  64:	1201110e 	andne	r1, r1, #-2147483645	; 0x80000003
  68:	00061001 	andeq	r1, r6, r1
  6c:	012e0200 	teqeq	lr, r0, lsl #4
  70:	0e030c3f 	mcreq	12, 0, r0, cr3, cr15, {1}
  74:	0b3b0b3a 	bleq	ec2d64 <stack_top+0xeb1c8c>
  78:	01110c27 	tsteq	r1, r7, lsr #24
  7c:	06400112 			; <UNDEFINED> instruction: 0x06400112
  80:	010c4297 			; <UNDEFINED> instruction: 0x010c4297
  84:	03000013 	movweq	r0, #19
  88:	0e030005 	cdpeq	0, 0, cr0, cr3, cr5, {0}
  8c:	0b3b0b3a 	bleq	ec2d7c <stack_top+0xeb1ca4>
  90:	0a021349 	beq	84dbc <stack_top+0x73ce4>
  94:	0f040000 	svceq	0x00040000
  98:	490b0b00 	stmdbmi	fp, {r8, r9, fp}
  9c:	05000013 	streq	r0, [r0, #-19]
  a0:	0b0b0024 	bleq	2c0138 <stack_top+0x2af060>
  a4:	0e030b3e 	vmoveq.16	d3[0], r0
  a8:	Address 0x000000a8 is out of bounds.


Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000004 	andeq	r0, r0, r4
   8:	007d0002 	rsbseq	r0, sp, r2
   c:	00000004 	andeq	r0, r0, r4
  10:	00000008 	andeq	r0, r0, r8
  14:	087d0002 	ldmdaeq	sp!, {r1}^
  18:	00000008 	andeq	r0, r0, r8
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	047b0002 	ldrbteq	r0, [fp], #-2
	...
  30:	00000004 	andeq	r0, r0, r4
  34:	007d0002 	rsbseq	r0, sp, r2
  38:	00000004 	andeq	r0, r0, r4
  3c:	00000008 	andeq	r0, r0, r8
  40:	047d0002 	ldrbteq	r0, [sp], #-2
  44:	00000008 	andeq	r0, r0, r8
  48:	00000050 	andeq	r0, r0, r0, asr r0
  4c:	047b0002 	ldrbteq	r0, [fp], #-2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
   c:	00000000 	andeq	r0, r0, r0
  10:	0001000c 	andeq	r0, r1, ip
  14:	00000018 	andeq	r0, r0, r8, lsl r0
	...
  20:	0000001c 	andeq	r0, r0, ip, lsl r0
  24:	006c0002 	rsbeq	r0, ip, r2
  28:	00040000 	andeq	r0, r4, r0
  2c:	00000000 	andeq	r0, r0, r0
  30:	00010024 	andeq	r0, r1, r4, lsr #32
  34:	00000050 	andeq	r0, r0, r0, asr r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000031 	andeq	r0, r0, r1, lsr r0
   4:	001c0002 	andseq	r0, ip, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  20:	00000063 	andeq	r0, r0, r3, rrx
  24:	05000000 	streq	r0, [r0, #-0]
  28:	01000c02 	tsteq	r0, r2, lsl #24
  2c:	4b4b1700 	blmi	12c5c34 <stack_top+0x12b4b5c>
  30:	01000402 	tsteq	r0, r2, lsl #8
  34:	00003901 	andeq	r3, r0, r1, lsl #18
  38:	1d000200 	sfmne	f0, 4, [r0, #-0]
  3c:	02000000 	andeq	r0, r0, #0
  40:	0d0efb01 	vstreq	d15, [lr, #-4]
  44:	01010100 	mrseq	r0, (UNDEF: 17)
  48:	00000001 	andeq	r0, r0, r1
  4c:	01000001 	tsteq	r0, r1
  50:	72617500 	rsbvc	r7, r1, #0, 10
  54:	00632e74 	rsbeq	r2, r3, r4, ror lr
  58:	00000000 	andeq	r0, r0, r0
  5c:	24020500 	strcs	r0, [r2], #-1280	; 0x500
  60:	17000100 	strne	r0, [r0, -r0, lsl #2]
  64:	00833083 	addeq	r3, r3, r3, lsl #1
  68:	63010402 	movwvs	r0, #5122	; 0x1402
  6c:	00080287 	andeq	r0, r8, r7, lsl #5
  70:	Address 0x00000070 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
   4:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xe67
   8:	61686320 	cmnvs	r8, r0, lsr #6
   c:	69730072 	ldmdbvs	r3!, {r1, r4, r5, r6}^
  10:	7974657a 	ldmdbvc	r4!, {r1, r3, r4, r5, r6, r8, sl, sp, lr}^
  14:	47006570 	smlsdxmi	r0, r0, r5, r6
  18:	4320554e 	teqmi	r0, #327155712	; 0x13800000
  1c:	372e3420 	strcc	r3, [lr, -r0, lsr #8]!
  20:	6d00322e 	sfmvs	f3, 4, [r0, #-184]	; 0xffffff48
  24:	006e6961 	rsbeq	r6, lr, r1, ror #18
  28:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  2c:	74730063 	ldrbtvc	r0, [r3], #-99	; 0x63
  30:	676e6972 			; <UNDEFINED> instruction: 0x676e6972
  34:	6675625f 			; <UNDEFINED> instruction: 0x6675625f
  38:	00726566 	rsbseq	r6, r2, r6, ror #10
  3c:	4d5c3a44 	vldrmi	s7, [ip, #-272]	; 0xfffffef0
  40:	65747361 	ldrbvs	r7, [r4, #-865]!	; 0x361
  44:	6d452072 	stclvs	0, cr2, [r5, #-456]	; 0xfffffe38
  48:	64646562 	strbtvs	r6, [r4], #-1378	; 0x562
  4c:	53206465 	teqpl	r0, #1694498816	; 0x65000000
  50:	65747379 	ldrbvs	r7, [r4, #-889]!	; 0x379
  54:	4420736d 	strtmi	r7, [r0], #-877	; 0x36d
  58:	6f6c7069 	svcvs	0x006c7069
  5c:	555c616d 	ldrbpl	r6, [ip, #-365]	; 0x16d
  60:	2074696e 	rsbscs	r6, r4, lr, ror #18
  64:	45282033 	strmi	r2, [r8, #-51]!	; 0x33
  68:	6465626d 	strbtvs	r6, [r5], #-621	; 0x26d
  6c:	20646564 	rsbcs	r6, r4, r4, ror #10
  70:	4c5c2943 	mrrcmi	9, 4, r2, ip, cr3
  74:	6f737365 	svcvs	0x00737365
  78:	5c32206e 	ldcpl	0, cr2, [r2], #-440	; 0xfffffe48
  7c:	2062614c 	rsbcs	r6, r2, ip, asr #2
  80:	5f500031 	svcpl	0x00500031
  84:	735f7874 	cmpvc	pc, #116, 16	; 0x740000
  88:	6e697274 	mcrvs	2, 3, r7, cr9, cr4, {3}
  8c:	61550067 	cmpvs	r5, r7, rrx
  90:	535f7472 	cmppl	pc, #1912602624	; 0x72000000
  94:	5f646e65 	svcpl	0x00646e65
  98:	69727453 	ldmdbvs	r2!, {r0, r1, r4, r6, sl, ip, sp, lr}^
  9c:	7500676e 	strvc	r6, [r0, #-1902]	; 0x76e
  a0:	2e747261 	cdpcs	2, 7, cr7, cr4, cr1, {3}
  a4:	Address 0x000000a4 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000018 	andeq	r0, r0, r8, lsl r0
  14:	00000000 	andeq	r0, r0, r0
  18:	0001000c 	andeq	r0, r1, ip
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	8b080e42 	blhi	203930 <stack_top+0x1f2858>
  24:	42018e02 	andmi	r8, r1, #2, 28
  28:	00040b0c 	andeq	r0, r4, ip, lsl #22
  2c:	0000000c 	andeq	r0, r0, ip
  30:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
  34:	7c020001 	stcvc	0, cr0, [r2], {1}
  38:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  3c:	00000014 	andeq	r0, r0, r4, lsl r0
  40:	0000002c 	andeq	r0, r0, ip, lsr #32
  44:	00010024 	andeq	r0, r1, r4, lsr #32
  48:	00000050 	andeq	r0, r0, r0, asr r0
  4c:	8b040e42 	blhi	10395c <stack_top+0xf2884>
  50:	0b0d4201 	bleq	35085c <stack_top+0x33f784>
