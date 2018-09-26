#include<stdio.h>

void copys(char *,char *);
void main()
{
		char str1[10] = "prem raj";
		char str2[10];


		copys(str1,str2);
		display();

}

void copys(char *str1,char *str2)
{
 int i = 0, len = 0;

     while(str1[i] != '\0')
		     {
				         len++;
								         i++;
												     }

														     printf("%d\n",len);

																     for(i=0 ; i<=len ; i++)
																		     {
																				         str2[i] = str1[i];
																								     }
}

void display()
{
		printf("new string is : %d\n",str2);
}
