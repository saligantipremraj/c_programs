#include<stdio.h>

int check(int);
int pwr(int , int);

void main()
{
		long a,b,len = 0,c;


		printf("enter the number from where you want armstrong numbers\n");
		scanf("%ld",&a);

		
	// for(c = a ; c >= a ; c++) //for a particular range you have to take b also like c <= b i.e., from a to b
			while(1)
					{
						if(check(a) == 1)
							{
								printf("a : %ld\n",a);
								len++;
								a++;
							}
					

					if(len == 20)
									break;
					}
			
}

int check(int num)
{
		int rem = 0, sum = 0 , digits = 0,t;

		t = num;

		while(t != 0)
			{
					digits++ ;
					t = t/10;
			}

			t = num;

		while(t != 0)
			{
					  rem = t%10;
						sum = sum + pwr(rem , digits);
						t = t/10;
			}

		if(num == sum)
			return 1;

		else
			return 0;
}

int pwr(int rem , int digits)
{
		int i = 1,j;

		for(j = 1 ; j <= digits ; j++)
			{
					i = i * rem;
			}

		return i;
}
