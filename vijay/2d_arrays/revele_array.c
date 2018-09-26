#include<stdio.h>
#include<string.h>
void reveles(char(*)[20]);
void main()
{
	char str[][20] = {"vijay",
							"prasad"};
	reveles(str);
}

void reveles(char (*str)[20])
{
	int i,j,len,k;
	char temp;
	for (i = 0;i < 2; i++)
	{
		for(j = 0,k = strlen(str[i]) - 1; j < k; j++, k--)
		{
			temp = *(str[i]+j);
			*(str[i]+j) = *(str[i]+k);
			*(str[i]+k) = temp;
		}
	}
	for (i = 0; i < 2; i++)
		printf("%s\n",str[i]);
}
