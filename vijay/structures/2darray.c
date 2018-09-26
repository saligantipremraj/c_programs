#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct array
{
	char *s;
	struct array *next;
};

int getword(char *);

void main()
{
	char word[20];
	struct array *p,*temp,*start;
	p = NULL;
	start = p;
	while(getword(word) != EOF)
	{
		if(p == NULL)
		{
			p = malloc(sizeof(struct array));
			p->s = malloc(sizeof(word));

			strcpy(p->s,word);
			p->next = NULL;
			temp = p;
		}
		else
		{
			start = malloc(sizeof(struct array));
			start->s = malloc(sizeof(word));

			strcpy(start->s,word);
			start->next = NULL;
			
			temp->next=start;
			temp = start;
		}
	}
	while(p != NULL)
	{
		printf("%s\n", p->s);
		p = p->next;
	}
}



int getword(char *word)
{
	int c,i;
	for(i = 0;(c = getchar()) != EOF  && c != '\n' && c != ' ';i++)
	{
		*(word+i) = c;
	}
	*(word+i) = '\0';
	if(c == EOF)
		return EOF;
	else
		return i;
}
