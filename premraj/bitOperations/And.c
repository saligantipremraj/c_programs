#include<stdio.h>

#define _lf_shift(i) (1<<i)

void main()
{
		unsigned char n,k,i;

	printf("enter the value\n");
	scanf("%d",&n);

	for(i = 0; i <= 7; i++)
		{
			k = n & _lf_shift(i);

			if(k != 0)
				printf("%d is on\n",i);
	
			else 
				printf("%d is off\n",i);
		}

}
