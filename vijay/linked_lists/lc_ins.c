#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node* insfirst(struct node *,int);
void display(struct node *);

int main()
{
	struct node *p = NULL;
	p = insfirst(p,2);
	p = insfirst(p,18);
	p = insfirst(p,10);
	display(p);
	return 0;
}
struct node* insfirst(struct node *p,int x)
{
/* if list is empty*/
	if(p == NULL)
	{
		struct node *temp;
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = x;
		temp->link = NULL;
		return  temp;
	}
	else
	{
		struct node *new,*save,*next;
		new = (struct node *)malloc(sizeof(struct node));
		new->data = x;
		/*checking whether our node is lessthan previous node*/
		save = p;
		while(save != NULL)
		{
			if(new->data < save->data )
			{
				next = save->link;
				new->link = save;
				p=new;
			}
			else
			{
				save->link = new; 
				new->link = NULL;
				save = save->link;
			}
		}
		return p;
	}
}	
void display(struct node *p)
{
	while(p != NULL)
	{
		printf("%d\n",p->data);
		p = p->link;
	}	
}	
