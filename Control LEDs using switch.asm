ORG 00H
L1:JB P0.5, L2
 MOV P3,#22H
 MOV P2,#00H
  SJMP L1
L2:MOV P2,#22H
  MOV P3,#00H
  SJMP L1
  END