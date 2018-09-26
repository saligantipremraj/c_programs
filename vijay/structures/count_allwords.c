#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	char *str;
	int count;
	struct node *next;
};
struct node *p = NULL;
int getword(char*);
void search(char*);
#define max 100
int main()
{
	char temp[max];
	while(getword(temp) != EOF)
	{
		if(isalpha(temp[0]))
			search(temp);
	}
	while(p != NULL)
	{
		printf("%s : %d",p->str,p->count);
		p = p->next;
	}
}

int getword(char *s)
{
	int ch,i;
	for(i = 0;(ch = getchar()) != ' '&& ch != '\n' && ch != EOF ; i++)
	{
		*(s+i) = ch;
	}
	*(s+i) = '\0';
	if(i = 0)
		return EOF;
	else 
		return i;
}


void search(char *s)
{
	struct node *start = p,*temp;
	if(p = NULL)
	{
		p = malloc(sizeof(struct node));
		strcpy((p->str = malloc(strlen(s)+1)),s);
		p->count = 1;
		p->next = NULL;
		return;
	}
	else if(p != NULL)
	{
		while(start != NULL)
		{
			if(strcmp(start->str,s) == 0)
			{
				start->count++;
				return;
			}
			temp = start;
			start = start->next;
		}
	}
	else
	{
		start = malloc(sizeof(struct node));
		strcpy((start->str = malloc(strlen(s)+1)), s);
		start->count = 1;
		start->next = NULL;
		temp->next = start;
		return;
	}
}
