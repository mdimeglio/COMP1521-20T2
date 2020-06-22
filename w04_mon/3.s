.text
main:
        # int x, y;
    # $t0 = x
    # $t1 = y

    # printf("Enter a number: ");
    la  $a0, enter_number
    li  $v0, 4
    syscall

    # scanf("%d", &x);
    li      $v0, 5
    syscall
    move 	$t0, $v0

    bgt     $t0, 46340, then
    j       else
then:
    li      $v0, 4
    la      $a0, square_too_big
    syscall

    j   fi
else:
    # y = x * x;
    mul     $t1, $t0, $t0

    # printf("%d", y)
    li      $v0, 1
    move    $a0, $t1
    syscall

    # printf("\n")
    li      $v0, 11
    li		$a0, '\n'
    syscall
fi:
    # return 0;
    li  $v0, 0
    jr	$ra

.data
enter_number:
    .asciiz "Enter a number: "
square_too_big:
    .asciiz "square too big for 32 bits\n"


.text
