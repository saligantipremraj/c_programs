#include<stdio.h>

void main()
{
//		long n;
		int n,i,k;
		printf("enter any number\n");
		scanf("%d",&n);

		for(i = 31; i >= 0 ; i--) //if we use 63 in place we get different result because int i upto 4 bytes
			{
					k = n>>i;

					if(k & 1)
						printf("1");

					else
						printf("0");
			}
	printf("\n");	
}
