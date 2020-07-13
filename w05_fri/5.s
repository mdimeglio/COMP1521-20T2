.text
# $t0 = i
# $t1 = 4 * i
main:
    li  $t0, 0
while1:
    blt $t0, 10, do1
    j   done1
do1:
    li  $v0, 5
    syscall

    mul $t1, $t0, 4
    sw  $v0, numbers($t1)

    addi $t0, $t0, 1
    j   while1
done1:

    li  $t0, 0
while2:
    blt $t0, 10, do2
    j   done2
do2:
    mul $t1, $t0, 4
    lw  $a0, numbers($t1)
    li  $v0, 1
    syscall

    li  $a0, '\n'
    li  $v0, 11
    syscall

    addi $t0, $t0, 1
    j   while2
done2:
    li  $v0, 0
    jr  $ra

.data
numbers:
    .word 0, 0, 0, 0, 0, 0, 0, 0, 0, 0