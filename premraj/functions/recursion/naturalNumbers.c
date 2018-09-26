#include <stdio.h>

int sum(int);

int main()
{
   int i,result;
   printf("enter a number");
   scanf("%d", &i);
   result = sum(i);
   printf("%d",result);
}

int sum(int a)
{
   if(a != 0)
     return a + sum(a-1);
   else
     return a;
}
