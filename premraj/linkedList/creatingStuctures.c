#include<stdio.h>
#include<stdlib.h>

struct linked {
	int salary;
	struct linked *nextAddr;
	};

void printdata(struct linked*);

int main()
{
   struct linked *firstAddr  = NULL;
   struct linked *secondAddr = NULL;
   struct linked *thirdAddr  = NULL;

   //alocating dynamic address
    
   firstAddr = (struct linked*)malloc(sizeof(struct linked));
   printf("%p\n",firstAddr);

   
   secondAddr = (struct linked*)malloc(sizeof(struct linked));
   printf("%p\n",secondAddr);

   thirdAddr = (struct linked*)malloc(sizeof(struct linked));
   printf("%p\n",thirdAddr);

   //passing the salary data

   firstAddr -> salary = 10000;
   firstAddr -> nextAddr = secondAddr;

   secondAddr -> salary = 11000;
   secondAddr -> nextAddr = thirdAddr;
 
   thirdAddr -> salary = 12000;
   thirdAddr -> nextAddr = NULL;

   //function to display data of salary
   printdata(firstAddr);
}

void printdata(struct linked *p)
{
   while(p != NULL)
    {
       printf("%d\n",p -> salary);
       p = p -> nextAddr;
    }
}
