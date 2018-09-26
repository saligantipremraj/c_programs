#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
		struct node *link;
				};
				
struct node insert(struct node **);
struct node display();
struct node *ptr = NULL;
				
int main()
{
	insert(&ptr);
	display();

}

struct node insert(struct node **temp)
{
																				
			 		printf("enter the data\n");
			 		printf("(enter -1 to end)");
																												
					scanf("%d",&(*temp) -> data);
																																
					if((*temp)->data == -1)
						{
							(*temp) -> link = NULL;
						}
					else{
					(*temp) = (struct node *)malloc(sizeof(struct node));
					(*temp) = (*temp)->link;
					}
				
}

struct node display()

{
           struct node *p = ptr;
					 while((p) != NULL)
						{
							printf("%d -->",(p)->data);
							(p) = (p)->link;
						}
}
