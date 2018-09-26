#include<stdio.h>

void main()
{
		int a,b,x,y,lcm,gcd,t;

		printf("enter any two numbers\n");

		scanf("%d%d",&a,&b);

		x = a;
		y = b;

		while(y != 0)
			{
					t = y;
					y = x%y;
					x = t;
			}

			gcd = x;
			lcm = (a*b)/gcd;

			printf("gcd and lcm of %d , %d are : %d , %d\n",a,b,gcd,lcm);
}
