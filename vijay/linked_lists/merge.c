#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};


struct node *insert(struct node *,int);
void display(struct node *);
struct node *merge(struct node *, struct node *);
struct node *add(struct node *,struct node *);


void main()
{
	struct node *n1 = NULL,*n2 = NULL,*res = NULL;
	n1 = insert(n1, 2);
	n1 = insert(n1, 3);
	n1 = insert(n1, 120);
	display(n1);
	n2 = insert(n2,2);
	n2 = insert(n2,8);
	n2 = insert(n2,5);
	n2 = insert(n2,6);
	n2 = insert(n2,9);
	n2 = insert(n2,20);
	n2 = insert(n2,30);
	n2 = insert(n2,);
	display(n2);
	res = merge(n1,n2);
	display(res);
}

struct node *add(struct node *final,struct node *n1)
{
	struct node *temp;
	temp = malloc(sizeof(struct node));
	temp->data = n1->data;
	if(final = NULL)
	{
		temp->link = NULL;
		return temp;
	}
	final->link = temp;
	temp->link = NULL;
	return;
}

struct node *merge(struct node *n1,struct node *n2)
{
	 
	struct node *temp = n1,*save = n2, *res = n1, *final = NULL,*last;
	if(n2 == NULL && n1 != NULL)
	{
		while(n1 != NULL)
		{
			final = add(final, n1);
			n1 = n1->link;
			return final;
		}
	}
	
	if(n1 == NULL && n2 != NULL)
	{
		while(n2 != NULL)
		{
			final = add(final, n2);
			n2 = n2->link;
			return final;
		}
	}
	while(n2 != NULL)
	{
		while((temp != NULL) )
		{
			if(temp->data == n2->data)
			{
				n2 = n2->link;
			}
			temp = temp->link;
		}
		last = n1;
		while(last != NULL)
			last = last->link;
		final = add(final,n2);
		n2 = n2->link;
		temp = n1;
	}
	return final;
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
