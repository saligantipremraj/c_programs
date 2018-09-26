#include<stdio.h>
#include<string.h>
#define max 1024
char line[1024];
int max_line(char*);
void main()
{
	int c,len,maxlen,j=0;
	char str[max];
	char end[max];
	while( (c = getchar() != EOF))
	{
		str[j++] = c;
	}
	len = max_line(str);
	while(len > 0)
		{
			if(len > maxlen)
			{
				maxlen = len;
				strcpy(end,line);
			}
		}
	printf("longest line is %s\n", end);
		
}

max_line(char* str)
{
	int count,i;
	for(i=0; str[i] != '\n'; i++)
	{	
		line[i] = str[i];
		count++;
	}	
	return count;
}

