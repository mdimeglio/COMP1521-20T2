# print the square of a number

.data
enter_number_string:
    .asciiz "Enter a number: "

.text
# int main(void) {
main:
    # int x, y;
    # $t0 = x
    # $t1 = y

    # printf("Enter a number: ");
    la  $a0, enter_number_string
    li  $v0, 4
    syscall

    # scanf("%d", &x);
    li      $v0, 5
    syscall
    move 	$t0, $v0

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
    
    # return 0;
    li  $v0, 0
    jr  $ra
    

