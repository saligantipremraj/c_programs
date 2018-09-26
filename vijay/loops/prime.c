#include<stdio.h>
int main()
{
int a,i,f;
f=0;
i=2;
printf("enter a number");
scanf("%d",&a);
while(i<=a/2)
{
if(a%i==0);
{
f=1;
break;
}
i++;
}
if(f=1)
{
printf("number is prime");
}
else
{
printf("number is not prime number");
}
}
