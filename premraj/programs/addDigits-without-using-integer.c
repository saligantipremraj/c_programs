#include<stdio.h>

void main()
{
		int i=0,sum = 0;
		char n[100];
		printf("enter any number\n");
		scanf("%s",n);

		while(n[i] != '\0')
			{
					n[i] = n[i] - '0';
					sum = sum + n[i];
					i++;
			}

		printf("%d",sum);
}
