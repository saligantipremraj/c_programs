//using pointers find largest number 

#include<stdio.h>

void main()
{
		int arr[] = {10,20,30,40,50};
		int sum[25];

		int *p,*q;
		int i,j=0;

		p = &arr[0];
		q = &arr[0];
    
		for(i=0 ; i<5 ; i++)
		{
			j=0;
			while(j<5)
			{
				if(p[i] == q[j])
					{
						j++;
					}
				else
				{
					sum[i] = p[i] + q[j];
					printf("%d-->",sum[i]);
					j++;
				}
			}

			printf("\n");
		}

		int large,size=0;

		i=0;

		while(sum[i] != 0)
		{
  			size++;
				i++;
		}
		printf("size of array sum:%d\n",size);

		for(i=0 ; i<=size ; i++)
		{
			if(large > sum[i])
				{
					large = sum[i];
				}
		}

		printf("largest nummber is:%d\n",large);

}
