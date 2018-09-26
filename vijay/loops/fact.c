#include<stdio.h>
void main()
{
	int f = 1,i,n;
	printf("enter a number");
	scanf("%d",&n);
	printf("%d",n);
	printf("factorial is %d\n",f);
	for(i=n; i>=1;i--);
	{
		f= f * i;
		printf("factorial is %d\n",f);
	}
	printf("factorial is %d",f);
}
