#include <stdio.h>
	
int main()
{
	int a[] = {1,2,3,4,5,6},i;
	int *p;
	p = &a[0];
	
	for(i=0 ; i<=5 ; i++)
	{	
		printf("%d",*p);
		p++;
	}
}

