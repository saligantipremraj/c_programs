#include<stdio.h>
#include<stdlib.h>


struct queue insert(struct queue **,struct queue **,struct queue **,int);
int delete(struct queue **,struct queue **,struct queue **);
struct queue display(struct queue **);

struct queue {
	int data;
	struct queue *next;
	};

void main()
{
	 int a;
   struct queue *m = NULL;
   struct queue *f = NULL;
   struct queue *r = NULL;

 insert(&m,&f,&r,100);
 insert(&m,&f,&r,200);
 insert(&m,&f,&r,300);
 insert(&m,&f,&r,400);
 insert(&m,&f,&r,500);

 a = delete(&m,&f,&r);
 a = delete(&m,&f,&r);
 printf("%d\n",a);
 display(&m); 
}

struct queue insert(struct queue **p,struct queue **f,struct queue **r,int val)
{

	if((*f) == NULL)
		{
			(*p) = (struct queue *)malloc(sizeof(struct queue));
			(*f) = (*r) = (*p);
			(*r) -> data = val;
			(*r) -> next = NULL;
		}

			(*r) -> next = (struct queue *)malloc(sizeof(struct queue));
			(*r) -> next -> data = val;
			(*r) -> next -> next = NULL;
			(*r) = (*r) -> next;
}
	
int delete(struct queue **m,struct queue **f,struct queue **r)
{
	struct queue *dn;
	int val;
	if(*m == NULL)
	{
		printf("queue empty\n");
		return 0;
	}

	if((*f) == (*r))
	{
		val = (*f) -> data;
		free(*f);
		(*f) = NULL;
		(*r) = NULL;
		(*m) = NULL;
		return val;
	}

	val = (*f) -> data;
	dn = (*f);
	(*f) = (*f) -> next;
	free(dn);
	return val;
}

struct queue display(struct queue **a)
{
	while((*a) != NULL)
	{
		printf("%d\n",(*a)->data);
		(*a) = (*a) -> next;
	}
}
