
#include<stdio.h>
#include<stdlib.h>

#define max 100

void insert(int ,int ,int *,int);
void display(int ,int ,int *);


void main()
{
	int a[max];
	int f = -1,r = -1;
	insert(f,r,a,1);
	display(f,r,a);
	insert(f,r,a,5);
	display(f,r,a);
	insert(f,r,a,10);
	display(f,r,a);
}

void insert(int f,int r,int *a, int x)
{
	 if(r == max){
		printf("queue is full");
		return;
		}
	else
	{
		r = r+1;
		a[r] = x;
	}
	if(f == 0)
		f = 1;

	return; 
}

void display(int f,int r,int *a)
{
	int i;
	for(i = f; i <= r;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
