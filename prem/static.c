#include <stdio.h>
void fun();

void main()
{
fun();
fun();
}

void fun()
{

static int i =0;
i++;
printf("%d",i);
}	
