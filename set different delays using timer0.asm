org 00h
l6: jb p1.3,l1
setb p3.3
acall delay1
clr p3.3
acall delay1
sjmp l6
l1: setb p3.3
acall delay2
clr p3.3
acall delay2
sjmp l6
delay1: mov tmod,#02h
mov th0,#0A4h
setb Tr0
l2:jnb tf0,l2

 clr tf0
 ret
delay2: mov tmod,#20h
mov th1,#0
setb tr1
mov r0,#18
l4:mov r1,#100
l3: jnb tf1,l3
clr tf1
djnz r1,l3
djnz r0,l4
ret
end