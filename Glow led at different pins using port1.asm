ORG 00H
L3:MOV P1,#55H
MOV A,P1
CJNE A,#22H,L1
SETB P3.0
CLR P3.4
CLR P3.2
SJMP L3
L1:JC L2
SETB P3.2
CLR P3.4
CLR P3.0
SJMP L3
L2:SETB P3.4
CLR P3.0
CLR P3.2
END
