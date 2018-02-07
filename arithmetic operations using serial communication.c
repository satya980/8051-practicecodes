#include<reg51.h>
#include<stdio.h>
void main()
//arithmetic operations using serial communication and the output is shown in seven segment
{
	char k[]="Invalid key pressed";
	char a;
	int i;
SCON=0X50;
       TMOD=0X20;
       TH1=0XFD;
       TR1=1;
	while(1)
	{
		i=0;
		
		while(RI==0);
		a=SBUF;
		RI=0;
		if(a=='A')
		{
		P0=P1+P2;
		}	
		else if(a=='S')
		{
		P0=P1-P2;
		}
		else if(a=='M')
		{
		P0=P1*P2;
		}
		else
		{
		while(i<19)
				 {
               SBUF=k[i];
               while(TI==0);
               TI=0;
					 i++;
			 }
		}
	}
	
}
