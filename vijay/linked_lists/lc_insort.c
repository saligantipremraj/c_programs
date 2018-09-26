#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *insert(struct node *,int );
void display(struct node *);
struct node * delete(struct node *,int);
void search(struct node *);


int main()
{
	struct node *p = NULL;
	p = insert(p,8);
	p = insert(p,2);
	p = insert(p,3);
	p = insert(p,5);
	p = insert(p,1);
	p = insert(p,6);
	p = insert(p,9);
	display(p);
	search(p);
// p = delete(p,3);
}

void search(struct node *temp)
{
	struct node *p = temp,*pred;;
	while((p->link->link) != NULL)
	{
		pred = p;
		p = p->link;
	}

	printf("\n%d\n",pred->data);
}

struct node *delete(struct node *p, int x)
{
	struct node *pred, *temp;

	if (p == NULL) 
		return;

	if (x == p->data) {
		temp = p;
		p = p->link;
		free(temp);
		return p;
	}

	temp = p->link;
	pred = p;
	while (temp != NULL && x != temp->data) {
		pred = temp;
		temp = temp->link;
	}

	if (temp != NULL)
	{
		pred->link = temp->link;
		free(temp);
	}
return p;
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
