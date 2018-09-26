#include<stdio.h>

int gcd_lcm(int,int);

void main()
{
		int a,b,c,gcd,lcm;

		printf("enter any two numbers\n");

		scanf("%d%d",&a,&b);

		c = gcd_lcm(a,b);

		gcd = c;

		lcm = (a*b)/c;

		printf("gcd and lcm are: %d and %d respectively\n",gcd,lcm);

}

int gcd_lcm(int x,int y)
{
	while(y != 0)
		{
		if(x>y)
			{
				x = x-y;
				return x;
			}


				y = y-x;
				return y;
			
		}
}
