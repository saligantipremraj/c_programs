#include<stdio.h>
void main()
{
	int a[2][2] = {1,2,3,4};
	int i,j,temp;
	printf("input matrix is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
	for(i=0;i<2;i++)
	{
		for(j=i;j<2;j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	printf("transposed matrix is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
}
