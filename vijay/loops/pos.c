#include<stdio.h>
void main()
{
	int x=52,y=50,res,p=6,n=4;
	x=x>>p-n;
	printf("%x\n",x);

	x=x<<p-n;
	printf("%x\n",x);

	y=y<<n;
	printf("%x\n",y);

	y=y>>p-n;
	printf("%x\n",y);

	res=x|y;
	printf("%d\n",res);
	
}
