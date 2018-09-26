#include <stdio.h>

int main()
{
		unsigned int a = 22,p1 = 3,p2 = 4;//result = 
		unsigned int set1,set2,set3,xor;

		set1 = (a>>p1);

		printf("set1:%d\n", set1);

		set2 = (a>>p2);

		printf("set2:%d\n",set2);

		xor = set1 ^ set2;

		printf("xor:%d\n",xor);

		xor = (xor<<p1);

		printf("set3:%d\n",xor);

		a = a^xor;

		printf("a:%d\n",a);
}
