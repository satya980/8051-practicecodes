ORG 00H
K1:MOV P1,#15H;p1=15H
MOV A,P1;A=15H
SWAP A;A=51H
MOV P2,A:P2=51H
SJMP K1
nop
end