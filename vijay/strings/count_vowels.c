#include<stdio.h>
#include<string.h>
void vowels(char*);
void main()
{
	char *str = "please please";
	vowels(str);
}

void vowels(char *str)
{
	char s[100];
	int i,j=0;
	for(i=0;str[i] != '\0'; i++)
	{
		if(str[i] =='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u')
		{
			i++;
		}
		else
		{
			s[j] = str[i];
			j++;
		}
	}
	printf("%s\n",s);
}

