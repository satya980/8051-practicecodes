#include<reg51.h>
void delay()
{
	int i=0;
for(i=0;i<30000;i++);

}
void main()
{
	int j=-4;
for(j=-4;j<5;j++)
{
	P3=j;
	delay();
}
}