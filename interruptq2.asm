org 00h
ljmp main
org 23h
mov P2,sbuf
clr ri
l2:djnz r1,l2
mov r1,#100
djnz r1,l2
mov r1,#100
mov r0,#36
reti
org 200h
main:
mov ie,#90h
mov scon,#50h
mov tmod,#21h
mov th1,#00fdh
setb tr1
l3: mov a,P1
add a,P1
mov P0,a
sjmp l3
end