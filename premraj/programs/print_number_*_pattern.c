#include<stdio.h>

void main()
{
		int i,j,k,n,count = 0;

		printf("enter the number of rows to print\n");

		scanf("%d",&n);

		for(i = 1 ; i <= n ; i++)
				{
						for(j = 1 ; j <= n-i ; j++)
								{
										printf(" ");
								}

						for(k = 1 ; k <= i ; k++)
								{
										printf("*");

										if(i>1 && count<i)
												{
														printf("%d",k++);
														count++;
												}
								}

						printf("\n");
						count = 1;
				}
}
