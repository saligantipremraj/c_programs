#include<stdio.h>
void main()
{
int i,j,k,n=5,l;
char ch;
for(i=0;i<=n;i++)
{
for(k=n;k>i;k--)
{
printf(" ");
}
for(j=0,ch='A';j<=i;j++)
{
printf("%c",ch);
ch++;
}
printf("\n");
}
}
