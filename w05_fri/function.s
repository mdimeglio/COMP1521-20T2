.data

# $s0 = x
# $s1 = y
# $s2 = z
main:
    # prologue
    addi	$sp, $sp, -4
	sw		$fp, ($sp)
	move	$fp, $sp
	
    addi	$sp, $sp, -16
	sw 		$ra, -4($fp)
	sw 		$s0, -8($fp)
	sw		$s1, -12($fp)
	sw		$s2, -16($fp)

    # body

    # scanf("%d", x);
    # scanf("%d", y);

    move    $a0, $s0
    move    $a1, $s1
    jal     add
    move    $s2, $v0

    # TODO

    li		$v0, 0
	
	# epilogue
	lw 		$ra, -4($fp)
	lw 		$s0, -8($fp)
	lw		$s1, -12($fp)
	lw		$s2, -16($fp)

	move	$sp, $fp
	lw		$fp, ($sp)
	addi	$sp, $sp, 4
	
	jr 		$ra


# $s0 = a
# $s1 = b
add:
    # prologue
    addi	$sp, $sp, -4
	sw		$fp, ($sp)
	move	$fp, $sp
	
    addi	$sp, $sp, -12
	sw 		$ra, -4($fp)
	sw 		$s0, -8($fp)
	sw		$s1, -12($fp)

    # body

    # TODO
	
    add     $v0, $a0, $a1

	# epilogue
	lw 		$ra, -4($fp)
	lw 		$s0, -8($fp)
	lw		$s1, -12($fp)

	move	$sp, $fp
	lw		$fp, ($sp)
	addi	$sp, $sp, 4
	
	jr 		$ra