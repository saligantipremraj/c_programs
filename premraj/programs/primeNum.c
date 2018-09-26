#include<stdio.h>
#include<math.h>

void main()
{
		int i=3,j,len = 0;

		while(1)
			{
					for(j = 2; j <= i-1 ; j++)
							{
									if(i%j == 0)
									break;
							}

					if(j == i)
						{
							printf("%d\n",i);
							len++;
						}
					i++;

				if(len == 10)
					break;
			}

}	
