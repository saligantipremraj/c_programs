#include<stdio.h>

void main()
{
	int n;
	char ch;

	while(1)

		{

			printf("enter any number\n");

			scanf("%d",&n);

			if((n/2)*2 == n)
					printf("%d is even\n",n);

			else
					printf("%d is odd\n",n);

			printf("enter 'y' to continue to another execution and 'n' to stop\n");
			scanf("%c\n",&ch);
			scanf("%c\n",&ch);

			if(ch == 'y' || ch == 'Y')
				continue;

			else
				break;
		}
}
