#include <stdio.h>
void main()
{
int i,j;
char ch;
for (i=1 ; i<=4 ; i++)
	{
	   for (j=1,ch='a'; j<=i ; j++,ch++)
		{
	
		  printf("%c ",ch);
		}
            printf("\n");

	}
}
