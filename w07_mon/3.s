.text

# $s0 - m
#
# a : 8($sp) -> 16($sp)
main:
    # prologue
    addi $sp, $sp, -20
    sw	 $ra, 0($sp)
    sw   $s0, 4($sp)

    # int a[3] = {0, 3, 2}
    li  $t0, 0
    sw  $t0, 8($sp)
    li  $t0, 3
    sw  $t0, 12($sp)
    li  $t0, 2
    sw  $t0, 16($sp)

    # body of main

    # m = max(a, 3)
    la  $a0, 8($sp)
    li  $a1, 3
    jal max
    move $s0, $v0

    # printf("%d", m);
    li  $v0, 1
    move $a0, $s0
    syscall

    # epilogue
    lw   $ra, 0($sp)
    lw   $s0, 4($sp)
    addi $sp, $sp, 20

    jr   $ra

# arguments
# $a0 = a
# $a1 = length
# local variables
# $s0 = a
# $s1 = length
# $s2 = first_element
# $s3 = max_so_far
max:
    # prologue:
    addi    $sp, $sp, -20
    sw		$s0, 0($sp)
    sw      $s1, 4($sp)
    sw      $s2, 8($sp)
    sw      $s3, 12($sp)
    sw      $ra, 16($sp)

    # body
    move    $s0, $a0
    move    $s1, $a1

    # first_element = a[0]
    lw      $s2, 0($s0)

    beq     $s1, 1, then
    j		else
then:
    # return first_element
    move    $v0, $s2
    j       epilogue      
else:
    # int max_so_far = max(&a[1], length - 1)
    la      $a0, 4($s0)  # $a0 = &a[1]
    addi    $a1, $s1, -1 # $a1 = length - 1
    jal     max
    move    $s3, $v0

    bgt     $s2, $s3, then2
    j       endif2
then2:
    move    $s3, $s2
endif2:

    move    $v0, $s3

    # epilogue:
epilogue:
    lw		$s0, 0($sp)
    lw      $s1, 4($sp)
    lw      $s2, 8($sp)
    lw      $s3, 12($sp)
    lw      $ra, 16($sp)
    addi    $sp, $sp, 20

    jr      $ra