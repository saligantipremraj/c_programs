
#include <stdio.h>
#include <stdlib.h>

#define max 5

struct queue{

	int data;
	struct queue *next;
	
};

void insertq(struct queue **,struct queue **,struct queue *,int);
int deleteq(struct queue **,struct queue **,struct queue *);
void displayq(struct queue **,struct queue **);
void display(struct queue *);
struct queue *make(int);


void main()
{
	int val;
	struct queue *f=NULL,*r=NULL;
	struct queue *p;
	
	p = make(max);

	insertq(&f,&r,p,100);
	insertq(&f,&r,p,200);
	insertq(&f,&r,p,300);
	displayq(&f,&r);

	deleteq(&f,&r,p);
	printf("After deletion:\n\n");
	displayq(&f,&r);

	deleteq(&f,&r,p);
	printf("After deletion:\n\n");
	displayq(&f,&r);

	insertq(&f,&r,p,500);
	insertq(&f,&r,p,600);
	insertq(&f,&r,p,700);
	insertq(&f,&r,p,800);
	displayq(&f,&r);
}

struct queue *make(int val)
{
	int i;
	struct queue *p=NULL;
	struct queue *start_node=NULL;

	for(i=0;i<val;i++)
	{
		if(p==NULL)
		{
			p = (struct queue *) malloc(sizeof(struct queue));

			start_node = p;

			p -> data = '\0';
			p -> next = NULL;
		}
		else
		{
			while(p->next!=NULL)
				p = p -> next;

			p -> next = (struct queue *) malloc(sizeof(struct queue));

			p -> next -> data = '\0';
			p -> next -> next = NULL;
		}

	}

	return start_node;

}

void display(struct queue *p)
{

	printf("Elements are:\n");
	while(p!=NULL)
	{
		printf("ca:%p Data:%d \n",p,p->data);
		p = p->next;
	}
	printf("\n");

}

void displayq(struct queue **f,struct queue **r)
{
	struct queue *p;
	
	printf("Elements in queue:\n");

//	printf("Front:%p\n\n",*f);

	p = *f;

	while(p != (*r) -> next)
	{
		printf("ca:%p  Data:%d \n",p,p->data);

		p = p -> next;
	}

//	printf("\n\nRear:%p\n",*r);
}

void insertq(struct queue **f,struct queue **r,struct queue *p,int val)
{
	struct queue *start_node = p;
	
	if(p==NULL)
	{
		printf("No Queue Available\n");
		return;
	}

	while(p->next!=NULL)
		p = p -> next;

	if(*r == p)
	{
		printf("Overflow..\n");
		printf("Cannot add %d\n\n",val);
		return;
	}
	p = start_node;

	if(*f == NULL)
	{
		*f = start_node;
		*r = start_node;

		p -> data = val;
		return;
	}

	*r = (*r) -> next;

	(*r) -> data = val; 

}


int deleteq(struct queue **f,struct queue **r,struct queue *p)
{
	int val;
	struct queue *start_node = p;
	struct queue *temp;

	if(*f==NULL)
	{
		printf("No elements to delete\n");
		return;
	}

	if((*f) == (*r))
	{
		val = (*f) -> data;
		*f = *r = NULL;

		return val;
	}
	else
	{
		val = (*f) -> data;
		*f = (*f) -> next;

		return val;
	}

}




