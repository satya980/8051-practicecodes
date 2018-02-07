org 00h
ljmp main
org 23h
mov P2,sbuf
clr ri
reti
org 200h
main: 
MOV SCON,#0050h
MOV IE,#90H
mov Tmod,#21h
mov th1,#0fdh
setb tr1
l:
mov A,P1
add a,p1
mov p0,a
sjmp l
end