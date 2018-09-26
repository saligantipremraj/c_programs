#include <stdio.h>

void func1()
{
   printf("iam in %s\n",__func__);

}

void func2()
{
   printf("iam in %s\n",__func__);
}

void add(int x,int y)
{
   printf("res:%d\n",x+y);
}
