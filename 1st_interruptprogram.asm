org 00h
	ljmp main
	
	org 1bh
		l3:djnz r1,l2
mov r1,#100
djnz r0,l3
mov r0,#36
mov r1,#100
cpl p1.5
reti
l2:reti


org 200h
main: mov r0,#36
  mov r1,#100
  mov ie,#88h
	mov tmod,#20h
	mov th1,#0
	setb tr1
	
	l1:mov A,P0
	add a,p2
	mov p3,a
	sjmp l1
	end
