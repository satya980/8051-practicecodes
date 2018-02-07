org 00h
L:mov a,p1
cjne a,#22h,q
setb p3.0
CLR P3.4
CLR P3.2
sjmp l
q: jc w
setb p3.4
CLR P3.0
CLR P3.2
sjmp l
w: setb p3.2
CLR P3.4
CLR P3.0
sjmp l
end