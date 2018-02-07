org 00h
l4: JB p1.2,l1
l2: mov tmod,#10h
setb p2.3
acall delay2
clr p2.3
acall delay2
sjmp l4
l1: mov tmod,#01h
clr p2.2
acall delay1
 setb p2.2
acall delay1
sjmp l4
delay1: mov r0,#7
l5: djnz r0,l3
ret
l3: mov th0,#0
mov tl0,#0
setb tr0
l6: jnb tf0,l6
clr tr0
clr tf0
sjmp l5
delay2: mov th1,#004Bh
mov tl1,#00feh
setb tr1
l7: jnb tf1,l7
clr tf1
clr tr1
ret
end                                     