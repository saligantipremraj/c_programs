#include<stdio.h>
int gcd(int ,int);
void main()
{
	int m=64,n=24;
	printf("gcd of two numbers is %d",gcd(m,n));
}

int gcd(int x,int y)
{
	if(y == 0)
	{
		return x;
	}
	else
	{
		return gcd(y,x%y);
	}
}
