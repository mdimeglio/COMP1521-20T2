.text
# $t0 = i
main:
    li  $t0, 0

while:
    blt $t0, 10, do
    j   done
do:
    mul $t1, $t0, 4
    lw  $a0, numbers($t1)
    li  $v0, 1
    syscall

    li  $a0, '\n'
    li  $v0, 11
    syscall
    
    addi    $t0, $t0, 1
    j		while
done:
    # return 0;
    li  $v0, 0
    jr  $ra

.data
numbers:
    .word 0, 1, 2, 3, 4, 5, 6, 7, 8, 9