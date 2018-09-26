#include<stdio.h>
void main()
{
	char a,b,c;
	printf("enter three the characters\n");
	scanf("%c%c%c",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is big");
	}
	else if(b>a && b>c)
	{
		printf("b is big");
	}
	else
	{
		printf("c is big");
	}
}
