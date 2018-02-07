org 00h
	ljmp main
org 23h
	l3:djnz r1,l2
	mov r1,#100
	djnz r0,l3
	mov r0,#36
	mov r1,#100
	MOV P2,sbuf
	clr ri
	