#include<stdio.h>

void main()
{
		int n,i,sum = 0,val;

		printf("enter number of elements\n");
		scanf("%d",&n);

		printf("enter the numbers\n");
		for(i = 1 ; i <= n ; i++)
			{
					scanf("%d",&val);
					sum = sum + val;
					
	// if want to calculate first n natural numbers, remove printf above 'for' loop and put 'i' in place of 'val' 
			}

		printf("sum of %d is : %d",n,sum);
}
