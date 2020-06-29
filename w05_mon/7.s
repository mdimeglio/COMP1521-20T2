.text
# $t0 = i
# $t1 = 4 * i
# $t2 = numbers[i]
main:
    li  $t0, 0
while:
    #bge     $t0, 10, done
    blt     $t0, 10, do
    j		done
do:
    mul     $t1, $t0, 4
    lw      $t2, numbers($t1)
    blt     $t2, 0, then
    j       fi
then:
    addi    $t2, $t2, 42
    sw		$t2, numbers($t1)
fi:
    addi    $t0, $t0, 1
    j       while
done:

    li  $t0, 0
while2:
    bge $t0, 10, done2
do2:
    li      $v0, 1
    mul     $t1, $t0, 4
    lw      $a0, numbers($t1)
    syscall

    li  $v0, 11
    li  $a0, '\n'
    syscall

    addi    $t0, $t0, 1
    j while2
done2:

    li      $v0, 0
    jr      $ra

.data
numbers:
    .word 0, 1, 2, -3, 4, -5, 6, -7, 8, 9