#include<stdio.h>
#include<stdlib.h>
#define MAX 1024

struct node{
				int data;
				struct node *lptr;
				struct node *rptr;
};

struct node *addnode(struct node *,int);
void display(struct node*);

void main()
{
				struct node *p = NULL;

				p = addnode(p,500);
				p = addnode(p,400);
				p = addnode(p,700);
				p = addnode(p,600);
				p = addnode(p,800);
				p = addnode(p,200);
				p = addnode(p,100);
				p = addnode(p,300);

				display(p);
}

struct node *addnode(struct node *p,int val)
{
				struct node *s = p;

				if(p == NULL)
				{
								p = (struct node *)malloc(sizeof(struct node));
								p -> data = val;
								p -> lptr = NULL;
								p -> rptr = NULL;
								return p;
				}
			while(1)
				{
								if(val < p->data)
								{
												if(p->lptr != NULL)
												{
																p = p->lptr;
												}

												else
												{
																p -> lptr = (struct node *)malloc(sizeof(struct node));
																p -> lptr -> data = val;
																p -> lptr -> lptr = NULL;
																p -> lptr -> rptr = NULL;
																return s;
												}
								}


								if(val > p->data)
								{
												if(p->rptr != NULL)
												{
																p = p->rptr;
												}

												else
												{
																p -> rptr = (struct node *)malloc(sizeof(struct node));
																p -> rptr -> data = val;
																p -> rptr -> lptr = NULL;
																p -> rptr -> rptr = NULL;
																return s;
												} 
								}
				}
}

struct node* stack[MAX];
int top = -1;

void push(struct node* p)
{
		if(top == (MAX-1))
			{
				printf("stack is FULL\n");
				return;
			}

		else
			{
				stack[++top] = p;
			}
}

struct node* pop()
{
		if(top == -1)
			{
					printf("stack is empty\n");
					return NULL;
			}

		else 
			{
				return stack[top--];
			}

}

void display(struct node* r)
{
		struct node* t = r;
		struct node* p = NULL;
		
		if(t == NULL)
			{
					printf("stack is empty\n");
					return;
			}
	
		top = 0;
		
		while(top>=0)
			{
				push(t);
				p = pop();
			
			
		while(p != NULL)
			{
					printf("%d-->",p -> data);

					if(p->rptr != NULL)
						{
							push(p->rptr);
						}
				
					p = p->lptr;
			}
			
				return;
		}
}
