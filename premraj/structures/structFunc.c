#include<stdio.h>
struct numbers values(int , int);

struct numbers {
		int n1;
		int n2;
		};

int main()
{
  struct numbers num;
  num = values(10,20);
  printf("n1:%d,n2:%d\n",num.n1,num.n2);
}

struct numbers values(int a,int b)
{
   struct numbers p;
   p.n1 = a;
   p.n2 = b;
   return p;
}
