#include<stdio.h>

void insertToQ(int *,int *,int *,int);
int deleteFromQ(int *,int *,int *);

void main()
{
   int q[5];
   int f=-1 , r=-1;
   int value1, value2,value3,value4,value5;

   insertToQ(q , &f , &r , 100);
   insertToQ(q , &f , &r , 200);
   insertToQ(q , &f , &r , 300);
   insertToQ(q , &f , &r , 400);
   insertToQ(q , &f , &r , 500);
   insertToQ(q , &f , &r , 600);
   value1 = deleteFromQ(q , &f , &r);
   value2 = deleteFromQ(q , &f , &r);
   value3 = deleteFromQ(q , &f , &r);
   value4 = deleteFromQ(q , &f , &r);
   value5 = deleteFromQ(q , &f , &r);
   printf("values are:%d %d %d %d %d\n",value1,value2,value3,value4,value5);
}

void insertToQ(int *q,int *f,int *r,int data)
{
   if(*r >= 4)
     {
	printf("queue is full\n");
   	return;
     }
   if(*f == -1)
     {
 	(*f)++;
	(*r)++;
	q[*r] = data;
     }
   else
     {
	(*r)++;
	q[*r] = data;
     }
}

int deleteFromQ(int *q,int *f,int *r)
{
   if(*f == -1)
     {
 	printf("queue is empty\n");
  	return 0;
     }
   if((*f) == (*r))
     {
      	(*f)--;
     	(*r)--;
   	return q[(*r) + 1];
     }

   else
     {
	(*f)++;
	return q[(*f)-1];
     }
}
