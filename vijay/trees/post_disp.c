
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
void postdisplay(struct node *);
void push(struct node *);
int  pop();

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
	postdisplay(t);
}

void postdisplay(struct node *t)
{
	struct node *p = NULL;
	if(t == NULL)
		return;
	else {
		top = -1;
		p = t;
	}

	while(1)
	{
		while(p != NULL)
		{
			push(p);
			p = p->lptr;
		}
		while (s[top] < 0)
		{
			p = -pop();
			printf("%d ",p->data);
			if(top == -1)
				return;
		}
		p = ((struct node*)s[top])->rptr;
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

