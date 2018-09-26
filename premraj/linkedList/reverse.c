#include<stdio.h>
#include<stdlib.h>

struct node
{
		int data;
		struct node* next;
};

struct node* create(struct node*,int);
void display(struct node*);
struct node* reverse(struct node*);

void main()
{
		struct node* r = NULL;

		r= create(r,100);
		r= create(r,200);
		r= create(r,300);
		r= create(r,400);
		r= create(r,500);

		display(r);

		r = reverse(r);

		display(r);
}

struct node* create(struct node* r,int val)
{
		struct node* p = r;

		if(r == NULL)
			{
					r = (struct node*)malloc(sizeof(struct node));
					r -> data = val;
					r->next = NULL;
					return r;

			}

		while(r->next != NULL)
				r = r->next;

		r->next = (struct node*)malloc(sizeof(struct node));
		r->next->data = val;
		r->next->next = NULL;
		return p;
}

void display(struct node* r)
{
		struct node* p = r;

		while(p != NULL)
			{
					printf("%d-->",p->data);
					p = p->next;
			}
}

struct node* reverse(struct node* r)
{
		struct node* p = r;
		struct node* q = r;
		struct node* t = NULL;
		struct node* n = r->next;

		while(n != NULL)
			{
					t = n->next;
					n->next = p;
					p = n;
					n = t;
			}
		r->next = NULL;
		return p;
}
