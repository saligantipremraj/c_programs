#include<stdio.h>
#include<string.h>
void main()
{
	char s[100]="abc";
	char d[100]="abc";
	char res[100];
	int i;

	for(i=0;i<sizeof(s);i++)
	{
		if(s[i]==d[i])
		{
			res[i]=s[i];
		}
		else break;
	}
	
	if(s[i]=='\0'&&d[i]=='\0')
	{
		printf("strings are equal\n");
		printf("%s\n",res);
	}
	else
	{
		printf("strings are not equal\n");
	}
}
