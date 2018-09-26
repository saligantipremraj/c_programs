#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
	char *str;
	struct con *p;
}*table[100];
char *des[1024];
int getword(char *);
void constant(char *,int);
void identifier(char *,int);
void st(char *,int);
int tab = 0;
int val = 0;
void main()
{
	char *word;
	
	if(getword(word) != EOF)
	{
		if(isalpha(word[0]))
			identifier(word,val);
		else if(word[0] == '"')
			st(word,val);
		else
			constant(word,val);
	}
	printf("%s", des);		
}

int getword(char *word)
{
	int ch,i;
	for(i = 0; (ch = getchar()) != EOF && (ch != ' ') && (ch != '\n');i++)
	{
		*(word+i) = ch;
	}
	*(word+i) = '\0';
	if(i == 0)
		return EOF;
	else
		return i;
}

void identifier(char *word,int len)
{
	
	strcpy(table[tab]->str,word);
	tab++;
 	strcpy(des+len,word);
	table[tab]->p = des+len;
	len = strlen(word)+1; 
}
void constant(char *word,int len)
{	
	strcpy(table[tab]->str,word);
	tab++;
 	strcpy(des+len,word);
	table[tab]->p = des+len;
	len = strlen(word)+1; 
}

void st(char *word,int len)
{	
	strcpy(table[tab]->str,word);
	tab++;
 	strcpy(des+len,word);
	table[tab]->p = des+len;
	len = strlen(word)+1;  
}
