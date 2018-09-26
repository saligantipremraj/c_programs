#include <stdio.h>
int fact(int);

int main()
{
   int result,i;
   printf("enter the number:");
   scanf("%d",&i);
   result = fact(i);
   printf("factorial of : %d is %d",i,result);
}

int fact(int a)
{
  
   if(a > 1)
     return a * fact(a-1);
}
