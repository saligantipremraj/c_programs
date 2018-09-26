#include<stdio.h>
void push(int *,int *,int);
int pop(int *,int *);

void main()
{
   int s[3];
   int top = -1;
   int value;

   push(s,&top,100);
   value = pop(s,&top);
   printf("value:%d",value);
}

void push(int *p,int *t,int data)
{
   if(*t == 3)
     {
				printf("stack is full\n");
				return;
     }

   else
     {
				(*t)++;
				p[*t] = data;
     }
}


int pop(int *p,int *t)
{
    if(*t == -1)
      {
				printf("stack is empty\n");
				return 0;  //to avoid printing garabage value
      }

    else
      {
    		(*t)--;
				return p[*t+1];
      }
}
