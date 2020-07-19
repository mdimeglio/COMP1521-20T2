.data
flag:
    .byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'
    .byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'
    .byte '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'
    .byte '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'
    .byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'
    .byte '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'

.text
main:
    li  $t0, 0
condRow:
    blt     $t0, 6, bodyRow
    j       doneRow
bodyRow:
    li  $t1, 0
condCol:
    blt     $t1, 12, bodyCol
    j       doneCol
bodyCol:

    # $t0 = row
    # $t1 = col
    # $t2 = row * SIZE_OF_ROW + col
    mul     $t2, $t0, 12
    add     $t2, $t2, $t1
    lb      $a0, flag($t2)
    li      $v0, 11
    syscall

    addi     $t1, $t1, 1
    j       condCol
doneCol:
    li      $v0, 11
    li      $a0, '\n'
    syscall

    addi    $t0, $t0, 1
    j       condRow
doneRow:
    li      $v0, 0
    jr      $ra