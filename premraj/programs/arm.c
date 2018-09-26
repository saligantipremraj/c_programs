#include<stdio.h>

int pwr(int , int);

void main()
{
		int digits = 0,n,t,sum = 0,rem = 0;

		printf("enter the number to check\n");

		scanf("%d",&n);

		t = n;
		
		while(t != 0)
			{
					digits++ ;
					t = t/10;
			}

			//printf("digits : %d\n",digits);

		t = n;

		while(t != 0)
			{
					rem = t%10;
				//	printf("rem : %d\n",rem);
					sum = sum + pwr(rem,digits);
				//	printf("sum : %d\n",sum);
					t = t/10;
			}
		
		if(n == sum)
			printf("it is armstrong number\n");

		else
			printf("not a armstrong number\n");

}

int pwr(int rem,int digits)
{
		int i = 1,j;

		for(j = 1 ; j <= digits ; j++)
			{
					i = i * rem;
			}

		return i;
}
