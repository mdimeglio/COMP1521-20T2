.text

main:
    # $t0 = x
    # $t1 = y

    # printf("Enter a number: ");
    la      $a0, enter_number_string
    li      $v0, 4
    syscall

    # scanf("%d", &x);
    li      $v0, 5
    syscall
    move    $t0, $v0

    # if (x > 46340) goto THEN;
    bgt     $t0, 46340, THEN
    blt     $t0, -46340, THEN

    # goto ELSE;
    j   ELSE
THEN:
    # printf("square too big for 32 bits\n");
    la      $a0, square_too_big_string
    li      $v0, 4
    syscall

    # goto FI;
    j   FI
ELSE:
    # y = x * x;
    mul $t1, $t0, $t0

    # printf("%d", y);
    li      $v0, 1
    move    $a0, $t1
    syscall

    # printf("\n");
    li      $v0, 11
    li      $a0, '\n'
    syscall
FI:
    li  $v0, 0
    jr  $ra
    

.data
enter_number_string:
    .asciiz "Enter a number: "
square_too_big_string:
    .asciiz "square too big for 32 bits\n"