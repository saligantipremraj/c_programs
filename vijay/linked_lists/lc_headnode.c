#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};


struct node *insert(struct node *,int);
void display(struct node *);
struct node *makenode(struct node * );
void main()
{
	struct node *p = NULL;
	p = makenode(p);
	p->link = insert(p->link,5);
	p->link = insert(p->link,3);
	p->link = insert(p->link,8);
	display(p);
}


struct node *makenode(struct node *p)
{
	if(p == NULL)
	{
		struct node *temp;
		temp = malloc(sizeof(struct node));
		temp->data = -1;
		temp->link = NULL;
		return temp;
	}
	else
	{
		printf("node already created");
		return;
	}
}
struct node *insert(struct node *p,int x)
{
	struct node *temp,*save;

	/* Create new node */
	temp = malloc(sizeof(struct node));
	temp->data = x;
	
	/* if there is no other node then new node will be first node*/
	if (p == NULL)
	{
		temp->link = NULL;
		return temp;
	}

	/* if the node is to be inserted at the beginning */
	if (x < p->data) {
		temp->link = p;
		return temp;
	}
	
	save = p;

	while (save->link != NULL && save->link->data < temp->data)
		save = save->link;
	
	temp->link = save->link;
	save->link = temp;
	return p;
}

void display(struct node *p)
{
	while(p != NULL)
	{
		printf("%d\n",p->data);
		p = p->link;
	}
	printf("\n");
}	
