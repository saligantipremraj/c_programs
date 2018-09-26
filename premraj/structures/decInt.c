#include<stdio.h>

struct person {
		char  name;
		int   id;
		float salary;
	      }p1;

int main()
{
   p1.name   = 'a';
   p1.id     = 66;
   p1.salary = 111.54;
   
   printf("%c\n",p1.name);
   printf("%d\n",p1.id);
   printf("%f\n",p1.salary);

   struct person p2 = {'A' , 72 , 111.182736};
   
   printf("%c\n",p2.name);
   printf("%d\n",p2.id);
   printf("%f\n",p2.salary);
}
