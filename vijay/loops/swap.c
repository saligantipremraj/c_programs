#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter two numbers");
scanf("%d",&a);
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("%d",a);
printf("%d",b);
}
