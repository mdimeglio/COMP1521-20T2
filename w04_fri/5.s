.text

main:
    # $t0 = x

    # int x = 24;
    li  $t0, 24
COND:
    # if (x < 42) goto DO;
    blt     $t0, 42, DO

    # goto DONE;
    j       DONE
DO:
    # printf("%d", y);
    li      $v0, 1
    move    $a0, $t0
    syscall

    # printf("\n");
    li      $v0, 11
    li      $a0, '\n'
    syscall

    # x += 3;
    addi    $t0, $t0, 3

    # goto COND;
    j       COND
DONE:

    li  $v0, 0
    jr  $ra