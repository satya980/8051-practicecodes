#include<reg51.h>
void delay()
{
int i=0;
	TMOD=0x01;
while(i<14)
{
TH0=0;
TL0=0;
TR0=1;
while(TF0==0);
TR0=0;
TF0=0;
i++;
}
}
void main()
{
	char	a[12]="Good morning";
	 int i; 
      while(1)
			{
				i=0;
				 SCON=0X50;
       TMOD=0X20;
       TH1=0XFD;
       TR1=1;
				
				 while(i<12)
				 {
               SBUF=a[i];
               while(TI==0);
               TI=0;
					 i++;
			 }
delay();
}  
}