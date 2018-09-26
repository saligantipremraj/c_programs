#include <stdio.h>
#include <stdlib.h>

struct emp {
  	int id;
	float salary;
	char name;
	struct emp *nextAddr;
	   };

struct emp *insert(struct emp **,int ,float ,char );
void display(struct emp *);
int main()
{
   struct emp *firstAddr = (struct emp*)malloc(sizeof(struct emp));
   struct emp *secondAddr = (struct emp*)malloc(sizeof(struct emp));
   struct emp *thirdAddr = (struct emp*)malloc(sizeof(struct emp));

   firstAddr -> id     = 21;
   firstAddr -> salary = 20000.00;
   firstAddr -> name   = 'a';
   firstAddr -> nextAddr = secondAddr;

   secondAddr -> id     = 21;
   secondAddr -> salary = 12000.00;
   secondAddr -> name   = 'b';
   secondAddr -> nextAddr = thirdAddr;

   thirdAddr -> id     = 30;
   thirdAddr -> salary = 21000.00;
   thirdAddr -> name   = 'c';
   thirdAddr -> nextAddr = NULL;

  insert(&firstAddr,466,25000.00,'p');
  insert(&firstAddr,466,25000.00,'p');
   display(firstAddr);
}

void display(struct emp *p)
{

   while(p != NULL)
      {
 	printf("id : %d, salary : %f, name = %c\n", p -> id, p -> salary, p -> name);   
   	p = p -> nextAddr;
      }
}

struct emp *insert(struct emp **i,int new_id,float new_sal,char new_name)
{
   struct emp *lastNode = *i;
   struct emp *insertedNode = (struct emp *)malloc(sizeof(struct emp));
   insertedNode -> id = new_id;
   insertedNode -> salary = new_sal;
   insertedNode -> name = new_name;
   insertedNode -> nextAddr = NULL;
 

    
   if((*i) == NULL)
      {
	(*i) = insertedNode;
      }

   while((lastNode->nextAddr) != NULL)
     lastNode = lastNode -> nextAddr;

     lastNode -> nextAddr = insertedNode;
//		 return lastNode;
}

