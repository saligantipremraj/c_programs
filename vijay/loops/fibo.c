#include<stdio.h>
int main()
{
int i,t1=0,t2=1,nextterm,n;
printf("enter the number of terms:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
printf("%d/n",t1);
nextterm=t1+t2;
t1=t2;
t2=nextterm;
}
}

