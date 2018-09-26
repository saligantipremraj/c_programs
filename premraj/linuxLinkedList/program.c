#include<stdio.h>

struct head {
	struct head *prev;
	struct head *next;
	};

struct node {
	int id;
	float sal;
	struct head link;
	};

void main()
{
   struct head lp;
   struct node *p = NULL;
   p = struct node *get();
   
   void list_init();
   void add_entry(&lp,p);
   void add_tail();
   void display();
}

void list_init(struct node *link)
{
   link -> prev = link;
   link -> next = link;
}

struct node *get()
{
  struct node *p;
   p = (struct node *)malloc(sizeof(struct node));
   printf("enter the id number\n");
   scanf("%d",&p -> id);

   printf("enter salary\n");
   scanf("%f",&p -> sal);
 
   return p;
}

void add_entry(struct head *h,struct node *n)
{
   
}


