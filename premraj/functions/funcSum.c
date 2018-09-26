#include <stdio.h>

int sum(int , int);

int main()
{
   int a=10 , b=20 , add;
   add = sum(a,b);
   printf("addition of a and b:%d", add);
}

int sum(int x, int y)
{
    int c;
    c = x + y;
    return c;
}
