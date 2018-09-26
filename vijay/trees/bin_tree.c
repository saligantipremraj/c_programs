#include<stdio.h>
#include<stdlib.h>

struct node 
{
	struct node *lptr;
	int data;
	struct node *rptr;
};

#define MAX 100

int top = -1;
int s[MAX];

void insert(struct node **,int);
void predisplay(struct node *);
void indisplay(struct node *);
void postdisplay(struct node *);

void push(struct node *);
int pop();

void copy(struct node *);
void delete(struct node **,int);

void main()
{
	struct node *t = NULL;
	
	insert(&t,8);
	insert(&t,5);
	insert(&t,10);
	insert(&t,3);
	insert(&t,4);
	insert(&t,9);
	insert(&t,11);
	
	printf("predisplay\n");
	predisplay(t);
	
	printf("indisplay\n");
	indisplay(t);
	
	printf("postdisplay\n");
	postdisplay(t);

	copy(t);
	delete(&t,8);
}


void delete(struct node **r,int x)
{
	
}


void copy(struct node *t)
{
		
	struct node *p,*q = NULL;
	if(t == NULL)
		return;
	else
	{	
		push(t);
	}
	while(top >= 0)
	{
		p = pop();
		while(p != NULL)
		{
			insert(&q,p->data);
			if(p->rptr != NULL)
				push(p->rptr);
			p = p->lptr;
		}
	}
	printf("\n");

	predisplay(q);
	
	indisplay(q);
	
	postdisplay(q);
	return;
}



void predisplay(struct node *t)
{
	struct node *p;
	if(t == NULL)
		return;
	else
		push(t);
	while(top >= 0)
	{
		p = pop();
		while(p != NULL)
		{
			printf("%d ",p->data);
			if(p->rptr != NULL)
				push(p->rptr);
			p = p->lptr;
		}
	}
	printf("\n");
	return;
}


void indisplay(struct node *t)
{
	struct node *p;
	if(t == NULL)
		return;
	else
	{
		p = t;
	}
	while(1)
	{
		while(p != NULL)
		{
			push(p);
			p = p->lptr;
		}
		if(top == -1)
		{
			printf("\n");
			return;
		}
		p = pop();
		printf("%d ",p->data);
		p = p->rptr;
	}
}


void postdisplay(struct node *t)
{
	struct node *p;
	if(t == NULL)
		return;
	else
		p = t;
	while(1)
	{
		while(p != NULL)
		{
			push(p);
			p = p->lptr;
		}
		while(s[top] < 0)
		{
			p = -pop();
			printf("%d ",p->data);
			if(top == -1)
			{
				printf("\n");
				return;
			}
		}
		p = ((struct node *)(s[top]))->rptr;
		s[top] = -s[top];
	}
}

void push(struct node *p)
{
	if(top ==  MAX - 1)
	{
		printf("stack is full");
		return;
	}
	else
		s[++top] = (int)p;
}


int pop()
{
	if(top == -1)
	{
		printf("no elements in stack");
		return;
	}
	else
		return s[top--];
}


void insert(struct node **t,int x)
{
	struct node *temp = *t,*p;
	while(1)
	{
		if(*t == NULL)
		{
			*t = malloc(sizeof(struct node));
			(*t)->data = x;
			(*t)->lptr = (*t)->rptr = NULL;
			return;
		}
		else if(x < temp->data)
		{
			if(temp->lptr != NULL)
				temp = temp->lptr;
			else
			{
				p = malloc(sizeof(struct node));
				p->data = x;
				p->lptr = p->rptr = NULL;
				temp->lptr = p;
				return;
			}
		}
		else if(x >temp->data)
		{
			if(temp->rptr != NULL)
				temp = temp->rptr;
			else
			{	
				p = malloc(sizeof(struct node));
				p->data = x;
				p->lptr = p->rptr = NULL;
				temp->rptr = p;
				return;
			}
		}
		else
			return;
	}
}	
