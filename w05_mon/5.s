.text
# $t0 = i
main:
    li  $t0, 0

while:
    blt $t0, 10, do
    j   done
do:
    li  $v0, 5
    syscall
    mul $t1, $t0, 4
    sw  $v0, numbers($t1)

    addi    $t0, $t0, 1
    j		while
done:
    # return 0;
    li  $v0, 0
    jr  $ra

.data
numbers:
    .word 0, 0, 0, 0, 0, 0, 0, 0, 0, 0