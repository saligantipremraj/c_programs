#include<stdio.h>

void main()
{
		int n;

		printf("enter any number\n");

		scanf("%d",&n);

		if((n&1) == 1)
			printf("odd\n");
		else
			{
				printf("even\n");
			}
}
