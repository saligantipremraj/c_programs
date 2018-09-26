#include<stdio.h>
int rem=0,res=0;
int reverse(int);
void main()
{
	int num=453;
	printf("%d\n",reverse(num));
}
int reverse(int x)
{
	if (x == 0)
	{
		return res;
	}
	else
	{
		rem=x%10;
		res=res*10+rem;
		x=x/10;
		reverse(x);
	}	
}
