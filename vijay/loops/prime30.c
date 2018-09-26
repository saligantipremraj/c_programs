#include<stdio.h>
void main()
{
 int i,j,isprime;
 for(i=0;i<30;i++)	
 {
  isprime=1;
  for(j=0;j<=i/2;j++)
  {
   if(i%j==0)
   {
    isprime=0;
    break;
   }  
  }
  if(isprime==1)
  {
   printf("%d\n",i);
  }
 }
}
