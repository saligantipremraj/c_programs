#include<stdio.h>

int multiply(int , int);

int main()
{
   int a,b,c;
   printf("enter values of a and b");
   scanf("%d%d",&a,&b);

   c = multiply(a,b);
   printf("multiplication of a and b is: %d\n", c);
}

int multiply(int x, int y)
{
   int mul;
   mul = x * y;
   return mul;
}
