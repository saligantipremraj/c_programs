#include<stdio.h>
#include<string.h>
struct key{
	char *word;
	int count;
}table[]={"auto",0,
			"break",0,
			"char",0,
			"do",0,
			"else",0,
			"for",0};
#define max 100
int getword(char*,int);
struct key* bin_search(char*,struct key*,int);
void main()
{
	char word[max];
	struct key *p;
	int n=sizeof(table)/sizeof(table[0]);
	while(getword(word,max) != EOF)
	{
		if(isalpha(word[0]))
		{
			if((p=bin_search(word,table,n)) != NULL);
				p->count++;
		}
	}
	for(p=table;p<(table+n);p++)
	{
		if(p->count > 0)
			printf("%s:%d\n",p->word,p->count);
	}
}
int  getword(char *word,int lim)
{
	int c;
	char *w=word;
	while(isspace(c=getchar()))
	;
	if(c != EOF)
		*w++ = c;
	if(!isalpha(c))
	{
		*w = '\0';
		return c;
	}
	for(;--lim>0;lim++)
	{
		if(!isalnum(*w=getchar()))
			break;
	}
	*w = '\0';
	return word[0];
}

struct key*  bin_search(char *word,struct key *tab,int n)
{
	int cond;
	struct key *low = &tab[0];
	struct key *high = &tab[n];
	struct key *mid;
	while(low < high)
	{
		mid = low+(high - low)/2;
		if((cond = strcmp(word,mid->word))<0)
			high = mid;
		else if(cond > 0)
			low = mid+1;
		else
			return mid;
	}
}
