#include<stdio.h>
#include<stdlib.h>

struct node* create(struct node* , int);
void display(struct node*);
void swap(struct node* ,int);

struct node
{
		int data;
		struct node* next;
};


void main()
{
		struct node* r = NULL;

		r = create(r,100);
		r = create(r,200);
		r = create(r,300);
		r = create(r,400);
		r = create(r,500);

		display(r);

		swap(r,300);
		display(r);
}

struct node* create(struct node* r,int val)
{
		struct node* t = r;

		if(r == NULL)
			{
					r = (struct node*)malloc(sizeof(struct node));
					r -> data = val;
					r -> next = NULL;
					return r;
			}

			while(r->next != NULL)
				r = r->next;

		r->next = (struct node*)malloc(sizeof(struct node));
		r->next->data = val;
		r->next->next = NULL;
		return t;
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

void swap(struct node* r,int val)
{
		struct node* t = r;
		struct node* ref = r;
		struct node* p = NULL;

		t = t->next;
		while(val != ref->data)
				ref = ref->next;

		p = ref->next;

		t->next = p;
		t = p->next;

		p->next = ref;
		ref->next = t;
}
