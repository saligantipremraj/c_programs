#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=7;j++)
		{
			printf("%d x %d = %d\t", j,i,j*i);
		}
		printf("\n");
	}
}
