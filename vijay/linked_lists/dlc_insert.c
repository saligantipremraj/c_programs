#include<stdio.h>
#include<stdlib.h>

struct node 
{
	struct node *lptr;
	int data;
	struct node *rptr;
};

void insert(struct node **,struct node **,int);
void display(struct node *);

void main()
{
	struct node *l = NULL, *r = NULL;
	insert(&l,&r,1);
	insert(&l,&r,5);
	insert(&l,&r,8);
	display(l);
}

void insert(struct node **l,struct node **r,int x)
{
	struct node *new;
	new = malloc(sizeof(struct node));
	new->data = x;
	if(*r == NULL)
	{
		new->lptr = new->rptr = NULL;
		(*l) = (*r) = new;
		return;
	}
	else
	{
		new->lptr = NULL;
		new->rptr = *l;
		(*l)->lptr = new;
		*l = new;
		return;
	}
	/*else
	{
		new->lptr = m->lptr;
		new->rptr = m;
		m->lptr = new;
		new->lptr->rptr = new;
		return;
	}*/
}

void display(struct node *p)
{
	while(p != NULL)
	{
		printf("%d\n", p->data);
		p = p->rptr;
	}
}
