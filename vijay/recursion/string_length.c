#include<stdio.h>
#include<string.h>

int i=0;
int slenght(char *);
void main()
{
	char  s[100]="vijay";
	int len = slength(s);
	printf("%d",len);
}

int slength(char * r)
{

//	puts(r);


	if(r[i] == '\0')
	{
		return i;
	}
	else
	{
		i++;
		slength(r);
	}
}
