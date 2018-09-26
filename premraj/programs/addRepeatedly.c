#include<stdio.h>
#include<string.h>

void main()
{
		int a,b,c;
		char ch;
		

		while(1)
			{
					printf("enter the two numbers\n");
					scanf("%d%d",&a,&b);

					c = a+b;

					printf("%d",c);
					
					//getchar();

					printf("enter 'y' to continue for other addition\n");
					scanf("%c",&ch);
					scanf("%c",&ch);

					if(ch == 'y' || ch == 'Y')
						{
							continue;
						}
					else
						{
							break;
						}
			}
}
