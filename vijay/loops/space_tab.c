#include<stdio.h>
#include<string.h>
void main()
{
	char s[] = "abc       def";
	char *p = s;
	int i;
	for(i = 0; s[i] != '\0'; i++)
	{
		if((s[i++] == ' ') && (s[i++] == ' ') && (s[i] == ' '))
		{
			*(p+i-3) = '/';
			*(p+i-2) = 't';
		}
		else
			*(p+i) = s[i];
	}
	printf("%s\n",p);
}
