#include <stdio.h>

struct std {

				int id;
				char name[20];
				int marks[4];

};


void main()
{
				int i,j;

				struct std arr[2];

				arr[0].id = 100;
				arr[1].id = 101;
				arr[2].id = 102;


				for(i=0 ; i<3 ;i++)
				{
								printf("enter %d name\n",i);
								scanf("%s",arr[i].name);
				}

				for(i=0 ; i<3 ;i++)
					{
								printf("enter the %d students marks\n",i);
								
								for(j=0 ; j<4 ; j++)
								{
												scanf("%d",&arr[i].marks[j]);
								}

								printf("\n");
					}

		//printing the results

				for(i=0 ; i<3 ; i++)
				{
								printf("id : %d\tname : %s\n",arr[i].id,arr[i].name);

								for(j=0 ; j<4 ; j++)
								{
												printf("\n marks : %d",arr[i].marks[j]);
								}

								printf("\n");
				}

				
}
