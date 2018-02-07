org 00h
l3: MOV Tmod,#01H
mov r0,#7 
l1: djnz r0,l2
clr p2.1
acall delay2
sjmp l3
l2: 
setb p2.1
acall delay1
sjmp l1
delay1: mov th0,#0
mov tl0,#0
setb tr0
l4: jnb tf0,l4
clr tr0
clr tf0
ret
delay2: mov th0,#93h
mov tl0,#00feh
setb tr0
l5: jnb tf0,l5
clr tr0
clr tf0
ret
end
