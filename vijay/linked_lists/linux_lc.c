#include<stdio.h>
#include<stdlib.h>


struct head 
{
	struct head *prev;
	struct head *next;
};


struct node
{
	int no;
	char name[20];
	int sal;
	struct head list;
};



void init(struct head *);
struct node *data(struct node *,int);
void add(struct node *, struct head *);
void list_add(struct head * ,struct head * , struct head *);
void add_tail(struct head *,struct head *);
void display(struct head *);


void main()
{
	struct head king;
	struct node *temp;
	int max,i;
	printf("enter max entries in the list");
	scanf("%d",&max);
	init(&king);
	for(i = 1; i<=max;i++)
	{
		temp = data(temp,i);
		add(temp,&king);
		display(&king);
	}
}



void init(struct head *p)
{
	p->next = p;
	p->prev = p;
}



struct node *data(struct node *temp,int i)
{
	printf("\nEnter %d employee details:\n\n",i);
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter employee number:");
	scanf("%d",&temp->no);
	printf("Enter employee name:");
	scanf("%s",temp->name);
	printf("Enter employee salary:");
	scanf("%d",&temp->sal);
	return temp;
}



void add(struct node *new, struct head *p)
{
	struct head *ptr,next,new1;
	for(ptr = p->next; ptr != p; ptr = ptr->next)
		;

	add_tail(&new->list,ptr);
}



void add_tail(struct head *new,struct head *head)
{
	list_add(new,head->prev,head);	
}



void list_add(struct head *new,struct head *prev , struct head *next)
{
	
	next->prev = new;
	new->next = next;
	new->prev = prev;
	prev->next = new;
}



void display(struct head *p)
{
	struct head *ptr;
	struct node *entry;

	for(ptr = p->next; ptr != p;ptr = ptr->next)
	{
		printf("\nEmployee Details:\n\n");
		entry = (struct node *) ((char *)ptr - (char *)(&(((struct node *)0)->list)));
		printf("Employee no    :%d \n", entry->no);
		printf("Employee Name  :%s \n", entry->name);
		printf("Employee Salary:%d \n",entry->sal);
	}
	printf("\n\n");
}
