#include<stdio.h>
char occurance(char*,char);
void main()
{
	char s[] = "abcdefc";
	char ch = 'c';
	occurance(s,ch);
	printf("%s",s);
}

char occurance(char* temp,char x)
{
	int i=0,j=0;
	for(;temp[i] != '\0';i++)
	{
		if(temp[i] != x)
		temp[j++] =  temp[i];
	}
	temp[j] = '\0';
return;
}

