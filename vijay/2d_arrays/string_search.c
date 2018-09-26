#include<stdio.h>
#include<string.h>
int searchs(char*[], char*);
void main()
{
	int k;
	char *str[] = {"vijay","prasad"};
	char *str1 = "durga prasad";
	k = searchs(str,str1);
	if(k == 1)
	{
		printf("string is found\n");
	}
	else
		printf("string is not found\n");
}

int searchs(char *str[],char* str1)
{
	int i,j;
	for(i=0;i<2;i++)
		{
			j = strcmp(str1,str[i]);
			if(j == 0)
			{
				return 1;
			}
		}
		return 0;	
}
