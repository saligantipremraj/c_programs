#include<stdio.h>

int add(int);

void main()
{
	int a,n;

	printf("enter a number\n");
	scanf("%d",&n);
  a = add(n);
	printf("a is :%d",a);
}

int add(int n)
{
		static int sum = 0;

		if(n == 0)
			return 0;

		else
			{
				sum = n%10 + add(n/10);
				return sum;
			}
}
