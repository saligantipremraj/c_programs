#include<stdio.h>
#include<stdlib.h>

void main()
{
		unsigned int v = 25,i;


		for(i=0; v!=0 ; i++)
		{
			v = v & (v-1);
		}

		printf("%d\n",i);
}
