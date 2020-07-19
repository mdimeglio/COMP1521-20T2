.text

# Stack frame:
# 4B  for old $s0
# 4B  for old $ra
# 12B for a


# Registers:
# $s0 = x

# int main() {
main:
    # PROLOGUE
    addi    $sp, $sp, -20
    sw      $s0, 0($sp)
    sw      $ra, 4($sp)

#   int a[] = {1, 5, 2};
    li      $t0, 1
    sw      $t0, 8($sp)

    li      $t0, 5
    sw      $t0, 12($sp)

    li      $t0, 2
    sw      $t0, 16($sp)

    # BODY
#   int x = max(a, 3);
    # addi    $a0, $sp, 8
    la      $a0, 8($sp)
    li      $a1, 3
    jal     max
    move    $s0, $v0

#   printf("%d\n", x);
    li      $v0, 1
    move    $a0, $s0
    syscall

    li      $v0, 11
    li      $a0, '\n'
    syscall

    li      $v0, 0
#   return 0;

    # EPILOGUE
    lw      $s0, 0($sp)
    lw      $ra, 4($sp)
    addi    $sp, $sp, 20

    jr      $ra
# }

# Arguments:
# $a0 = address of start of a
# $a1 = length

# Local variables:
# $s0 = address of start of a
# $s1 = length
# $s2 = first_element
# $s3 = max_so_far

# int max(int a[], int length) {
max:
    # PROLOGUE
    addi    $sp, $sp, -20
    sw      $ra, 0($sp)
    sw      $s0, 4($sp)
    sw      $s1, 8($sp)
    sw      $s2, 12($sp)
    sw      $s3, 16($sp)

    move    $s0, $a0
    move    $s1, $a1

    # BODY
#   int first_element = a[0];
    lw      $s2, 0($s0)

#   if (length == 1) {
    beq     $s1, 1, then1
    j       else1
then1:
#     return first_element;
    move    $v0, $s2
    j       endif1
#   } else {
else1:
#     // find max value in rest of array
#     int max_so_far =
#         max(&a[1], length - 1);

    # $a0 = &a[1] = a + 4
    # addi    $a0, $s0, 4
    la  $a0, 4($s0)

    # $a1 = length -1
    addi    $a1, $s1, -1

    jal     max
    move    $s3, $v0

#     if (first_element > max_so_far) {
    bgt     $s2, $s3, then2
    j       endif2
then2:
#       max_so_far = first_element;
    move    $s3, $s2
#     }
endif2:
    move    $v0, $s3
#     return max_so_far;
#   }
endif1:
    # EPILOGUE
    lw      $ra, 0($sp)
    lw      $s0, 4($sp)
    lw      $s1, 8($sp)
    lw      $s2, 12($sp)
    lw      $s3, 16($sp)
    addi    $sp, $sp, 20

    jr      $ra
# }