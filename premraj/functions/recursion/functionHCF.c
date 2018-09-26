#include <stdio.h>
int hcf(int , int);

int main()
{
   int a,b;
   printf("enter the numbers");
   scanf("%d %d",&a,&b);
   
   printf("hcf of %d and %d is:%d",a,b,hcf(a,b));
}

int hcf(int i, int j)
{
   int div , rem;
   if(i<j)
     {
	rem = j%i;
     
	while(rem > 0)
	   {
	     div = j/i;
   	     j = i;
	     i = rem;
	     rem = j%i;
	   }
     }
return i;
}
