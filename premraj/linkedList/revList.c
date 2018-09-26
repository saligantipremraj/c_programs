#include<stdio.h>
#include<stdlib.h>

struct node
{
		int data;
		struct node* next;
};

struct node* root = NULL;

struct node* create(struct node*,int);
void display(struct node*);
struct node* reverse(struct node*);

void main()
{
	struct node* r;
	root = r;
	r = create(r,100);		
	r = create(r,200);		
	r = create(r,300);		
	r = create(r,400);		
	r = create(r,500);		

	display(r);

	r = reverse(r);

	display(r);
}


struct node* create(struct node* r,int val)
{
		struct node* t = r;

		if(r == NULL)
			{
					r = (struct node*)malloc(sizeof(struct node));
					r->data = val;
					r->next = NULL;
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

// with respect address

struct node* reverse(struct node* r)
{
		struct node* t = NULL;
		struct node* q = r;
		struct node* p = r;
		struct node* n = r->next;

		while(n != NULL)
			{
					t = n->next;
					n->next = p;
					p = n;
					n = t;
			
			}
			
					r->next = NULL;
					free(t);
					free(n);
		return p;		

}

// with respect to data

/*void reverse(struct node* r)
{
		int i=0,j=4,k,temp;
		struct node *p,*q;

		p = q = r;

		while(i<j)
			{
					k = 0;

					 while(k<j)
					 	{
								q = q->next;
								k++;
						}

				temp    = p->data;
				p->data = q->data;
				q->data = temp;

				i++;
				j--;
				p = p->next;
				q = r;

			}
}
*/

