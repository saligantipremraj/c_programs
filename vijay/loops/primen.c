#include<stdio.h>
void main()
{
int i,j,fact,count=0;
for(i=1;i<500;i++)
{
fact=0;
for(j=1;j<500;j++)
{
if(i%j==0)
{
fact++;
}
}
if(fact==2)
{
printf("%d\n",i);
count++;
}
if(count=30)
{
break;
}
}
}
