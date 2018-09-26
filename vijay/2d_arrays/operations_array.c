#include<stdio.h>
void addx(int (*)[3],int (*)[3],int,int);
void subx(int (*)[3],int (*)[3],int,int);
void mulx(int (*)[3],int (*)[3],int,int);
void main()
{
	int m=3,n=3;
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int b[3][3] = {1,2,3,4,5,6,7,8,9};
	addx(a,b,m,n);
	subx(a,b,m,n);
	mulx(a,b,m,n);
}

void addx(int a[3][3],int b[3][3],int m,int n)
{
	int i,j;
	int c[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}


void subx(int x[3][3],int y[3][3],int m,int n)
{
	int i,j;
	int c[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			c[i][j] = x[i][j] - y[i][j];
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

void mulx(int a[3][3],int b[3][3],int m,int n)
{
	int c[m][n];
	int i,j,k,temp=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<3;k++)
			{
				temp = temp+a[i][k]*b[k][i];
			}
			c[i][j] = temp;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
