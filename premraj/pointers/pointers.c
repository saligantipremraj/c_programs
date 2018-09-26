#include<stdio.h>

void func(int *, int *);

void main()
{
   int i = 2,j = 3;
   func(&i,&j);
   printf("i = %d,j = %d\n",i,j);
}

void func(int *a , int *b)
{
   *a = *a * *a;
   *b = *b * *b;
}
