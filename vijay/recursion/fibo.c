#include<stdio.h>
int n=10,c=2,next;
void  fibo(int,int);
void main()
{
	int a=0,b=1;
	printf("%d %d ",a,b);
	fibo(a,b);
}

void fibo(int x,int y)
{
	if (c<n) 
	{
		next = x+y;
		printf(" %d ",next);
		x=y;
		y=next;
		c++;
		fibo(x,y);
	}
}
	
