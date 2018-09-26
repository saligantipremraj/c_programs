#include<stdio.h>
#include<string.h>
int i=0,temp;
char* reverse(char* , int );
void main()
{
	char s[] = "vijay";
	int l=strlen(s);
	reverse(s,l-1);
	printf("reverse of string is %s\n",s);
}

char* reverse(char *r,int x)
{
	if(r[i] != '\0' && i<x)
	{
		temp = r[i];
		r[i] = r[x];
		r[x] = temp;
		i++;
		x--;
		reverse(r,x);
	}
	else
	{
		 return r;
	}
}
