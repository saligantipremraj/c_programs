#include<stdio.h>
#include <string.h>

void main()
{
	int n = 123,i,j = 0;
	char a[100];

	while (n != 0)
	{
		i = n % 10;
		a[j] = i + '0';
		j++;
		n = n / 10;
	}
	a[j]='\0';
	
	for (i = 0, j = strlen(a) - 1; i < j; i++, j--)
	{
		char temp;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	printf("%s\n",a);
}

