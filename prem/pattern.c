#include <stdio.h>
void main()
{
	int i,j,k;
	char ch;
	for(i = 1; i <= 3 ; i++)
	{
		for(k = 3;  k > i ; k--)
		{
			printf(" ");
		}
		for(j=1 , ch = 'a';j <= i;j++, ch++)
		{		
			printf("%c ",ch);	
		}

		printf("\n");	
	}
}
