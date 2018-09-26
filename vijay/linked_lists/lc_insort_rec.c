#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void insert(struct node ** , int );
void display(struct node *);
struct node * reverse(struct node *);

void main()
{
	struct node *p = NULL, *r;
	insert(&p,1);
	insert(&p,2);
	insert(&p,5);
	display(p);
	r = reverse(p);
	display(r);
}

void insert(struct node **p, int val)
{
	if(*p == NULL)
	{
		*p = malloc(sizeof(struct node));
		(*p)->data = val;
		(*p)->link = NULL;
		return;
	}
	else
	{
		insert(&((*p)->link),val);
	}
}

void display(struct node *p)
{
	while(p != NULL)
	{
		printf("%d\n",p->data);
		p = p->link;
	}
	return;
}

struct node * reverse(struct node *p)
{
	struct node *s=NULL,*q;
	while(p != NULL)
	{
		q = s;
		s = p;
		p = p->link;
		s->link = q;
	}
	return s;
}
