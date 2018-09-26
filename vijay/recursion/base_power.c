#include<stdio.h>
int xpow(int,int);
void main()
{
	int b=8,n=3,res;
	res= xpow(b,n);
	printf("%d",res);
}
int xpow(int x,int y)
{
	if(y == 0)
	{
		return 1;
	}
	else
	{
		return x*xpow(x,y-1);
	}
}


