#include<stdio.h>

int rpower(int base, int p);

void main()
{
	int a = 2,j = 6,n = 1,i;

#if 0
	for (i = 1; i <= j; i++)
		n = n * a;
#endif

	n = rpower(a,j);
	printf("%d",n);

}

int rpower(int base, int p)
{
	return (p == 0) ? 1: base * rpower(base,p-1);
}
