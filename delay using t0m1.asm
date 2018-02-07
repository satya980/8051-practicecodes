#include<reg51.h>
void delay()
{
  TH0=0;
  TL0=0;
  TR0=1;
  while(TF0==0);
  TR0;
  TF0;
  }
  void main()
  {
  TMOD=0x01;
  while(1)
  {
  delay();
  P1=~P1;
  }}