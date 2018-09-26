#include<stdio.h>
#include<stdlib.h>

struct node {
				struct node* prev;
				int data;
				struct node* next;
};

struct rev {
				int data;
				struct rev *link;
};

struct node* root = NULL;
struct rev* revroot = NULL;

void reverse();
void create(int);
void display();

void main()
{
				create(200);
				create(800);
				create(900);
				create(400);
				create(500);
				create(600);
		
				reverse();

				display();
}

/*void create(int val)
{
				struct node* temp = NULL;

				struct node* p;
				p = root;

				temp = (struct node*)malloc(sizeof(struct node));
				temp -> data = val;
				temp -> prev = temp -> next = NULL;

				if(root == NULL)
				{
								root = temp;
				}

				else
				{
								while(p->next != NULL)
												p = p->next;

								p->next = temp;
								temp -> prev = p;
				}

}*/

void display()
{
				struct rev* p = revroot;

				while(p != NULL)
				{
								printf("data : %d",p->data);

								p = p->link;
				}

}

void create(int val)
{
				struct rev* temp = NULL;

				struct rev* p;
				p = revroot;

				temp = (struct rev*)malloc(sizeof(struct rev));
				temp -> data = val;
				temp -> link = NULL;

				if(revroot == NULL)
				{
								revroot = temp;
				}
				else
				{
								while(p->link != NULL)
												p = p->link;

								p->link = temp;
				}
}

/*void reverse()
{
		struct rev* tmp = NULL;
		struct rev* p = revroot;


		struct rev* sn = revroot;
		struct rev* ref = p->link;

		while(ref)
			{
					tmp = ref -> link;

					ref->link = p;
					p = ref;

					ref = tmp;
			}

			sn -> link = NULL;
			revroot = p;
}*/

void swap()
{
	struct rev* tmp = NULL;
	struct rev* p = revroot;

	
}
