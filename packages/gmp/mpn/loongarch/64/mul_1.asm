dnl  Loongarch mpn_mul_1

dnl  Contributed to the GNU project by Torbjorn Granlund.

dnl  Copyright 2023 Free Software Foundation, Inc.

dnl  This file is part of the GNU MP Library.
dnl
dnl  The GNU MP Library is free software; you can redistribute it and/or modify
dnl  it under the terms of either:
dnl
dnl    * the GNU Lesser General Public License as published by the Free
dnl      Software Foundation; either version 3 of the License, or (at your
dnl      option) any later version.
dnl
dnl  or
dnl
dnl    * the GNU General Public License as published by the Free Software
dnl      Foundation; either version 2 of the License, or (at your option) any
dnl      later version.
dnl
dnl  or both in parallel, as here.
dnl
dnl  The GNU MP Library is distributed in the hope that it will be useful, but
dnl  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
dnl  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
dnl  for more details.
dnl
dnl  You should have received copies of the GNU General Public License and the
dnl  GNU Lesser General Public License along with the GNU MP Library.  If not,
dnl  see https://www.gnu.org/licenses/.

include(`../config.m4')

C INPUT PARAMETERS
define(`rp',	`$a0')
define(`ap',	`$a1')
define(`n',	`$a2')
define(`b0',	`$a3')

define(`cy',	`$a4')
define(`i',	`$a5')

define(`BLOCK', `
	mul.d	$t1, $t2, b0
	mulh.du	$t0, $t2, b0
	ld.d	$t2, ap, $1
	add.d	$t6, $t1, cy
	sltu	$t5, $t6, $t1
	st.d	$t6, rp, eval($1-8)
	add.d	cy, $t0, $t5')

ASM_START()

PROLOGUE(mpn_mul_1c)
	srli.d	i, n, 2
	b	L(ent)
EPILOGUE()

PROLOGUE(mpn_mul_1)
	srli.d	i, n, 2
	or	cy, $r0, $r0
L(ent):	ld.d	$t2, ap, 0

	andi	$t0, n, 1
	andi	$t1, n, 2
	bnez	$t0, L(bx1)
L(bx0):	beqz	$t1, L(b0)
L(b10):	addi.d	ap, ap, -16
	addi.d	rp, rp, -16
	b	L(b2)
L(bx1):	beqz	$t1, L(b01)
L(b11):	addi.d	ap, ap, -8
	addi.d	rp, rp, -8
	b	L(b3)
L(b01):	addi.d	ap, ap, 8
	addi.d	rp, rp, 8
	beqz	i, L(end)

L(top):
L(b1):	BLOCK(0)
L(b0):	BLOCK(8)
	addi.d	i, i, -1
L(b3):	BLOCK(16)
L(b2):	BLOCK(24)
	addi.d	ap, ap, 32
	addi.d	rp, rp, 32
	bnez	i, L(top)

L(end):	mul.d	$t1, $t2, b0
	mulh.du	$t0, $t2, b0
	add.d	$t6, $t1, cy
	sltu	$t5, $t6, $t1
	st.d	$t6, rp, -8
	add.d	$a0, $t0, $t5
	jr	$r1
EPILOGUE()
