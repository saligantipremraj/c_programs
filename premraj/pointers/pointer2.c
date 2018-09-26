#include <stdio.h>
void display(int []);
int main()
{
   int a[] = {1,2,3,4,5,6};
  
   display(a);
   printf("\n");
   
}

void display(int a[])
{
   int i;

   for(i=0 ; i<=5 ; i++)
     {
	printf("%d",a[i]);
	printf("\n");
     }	
}
