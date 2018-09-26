#include<stdio.h>

void inBit(unsigned char);

void main()
{
		unsigned char n,i,k;

		printf("enter the number\n");
		scanf("%d",&n);

					printf("%d is same as binary",n);
					inBit(n);
		
			for(i = 0 ; i <= n ; i++)
				{
					
					printf("\n");

					k = n>>i;
					printf("after shifting of %d: ",n);
					inBit(k);

				if(k == 0)
					break;
				}

		
}

void inBit(unsigned char n)
{
		int i;
		unsigned char j,k,mask;

		for(i = 7 ; i >= 0 ; i--)
			{
					j = i;

					mask = 1<<j;

					k = n & mask;

					(k == 0)?printf("0"):printf("1");

			}
}
