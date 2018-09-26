
#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *lptr;
	struct node *rptr;
};

struct node *addnode(struct node *,int);

void main()
{
	struct node *p = NULL;

	p = addnode(p,100);
	p = addnode(p,200);
	p = addnode(p,300);
	p = addnode(p,400);

}


struct node *addnode(struct node *r,int val)
{
	if(r == NULL)
	{
		r = (struct node *) malloc(sizeof(struct node));

		r -> data = val;
		r -> lptr = NULL;
		r -> rptr = NULL;

		return r;
	}

	while(1)
	{
		if(r->data > val)
		{
			if(r->lptr != NULL)
			{
				r = r -> lptr;
			}
			else
			{
				r -> lptr = (struct node *)malloc(sizeof(struct node));

				r -> lptr -> data = val;
				r -> lptr -> lptr = NULL;
				r -> lptr -> rptr = NULL;
			}
		}

		if(r->data < val)
		{
			if(r->rptr != NULL)
			{
				r = r -> rptr;
			}
			else
			{
				r -> rptr = (struct node *)malloc(sizeof(struct node));

				r -> rptr -> data = val;
				r -> rptr -> lptr = NULL;
				r -> rptr -> rptr = NULL;
			}
		}
	
	}

}



