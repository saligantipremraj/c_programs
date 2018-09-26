#include<stdio.h>
#include<string.h>
struct key {
	char *word;
	int count;
}table[] = {"auto",0,
		      "break",0};
#define max 100
int getword(char*,int);
void bin_search(char*,struct key , int);
void main()
{
	char *word[max];
	struct key *p;
	int n = sizeof(table)/sizeof(table[0]);
	while(getword(word,max) != EOF)
	{
		if(isalpha(word[0]))
		{
			bin_search(word, table[],n);
		}
	}
	for(p = table;p<table+n;p++)
	{
		if(p->count > 0)
			printf("%s:%d",p->word,p->count);
	}
}

int getword(char *word,int lim)
{
	int c,i;
	for(i=0;(c = getchar()) != " "; i++)
	{
		word[i] = c;
	}
	word[i] = '\0';
	return word[0];
}

void bin_search(char *word,struct key *table,int n)
{
	int count;
	struct key *low = &table[0];
	struct key *high = &table[n-1];
	struct key *mid;
	while(low<high)
	{
		mid = low+(high - low)/2;
		cond = strcmp(word, mid->word);
		if(cond <0)
		
}
