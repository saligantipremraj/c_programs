#include <stdio.h>
void main()
{
   int i,j,k,l;
   for (i=0 ; i<=5 ; i++)
   {
      for (k=3 ; k>i ; k--)
       {
       printf(" ");
       }
      for (j=1 ; j<=i+1 ; j++ )
	{
	  printf("*");
	
      for (l=0 ; l==i ; l++)
       {
	printf(" ");
       }
     }
   printf("\n");}
}
