#include<stdio.h>
void replaces(char*[]);
void main()
{
	char *str[] = {"prasad","durga","vijay"};
	printf("%p %p %p %s %s %s",str[0],str[1],str[2],str[0],str[1],str[2]);
	replaces(str);
	printf("\n\n%p %p %p %s %s %s",str[0],str[1],str[2],str[0],str[1],str[2]);
}	

void replaces(char *str[])
{
	int i=0,j=2;
	char *temp;
	temp = str[i];
	str[i] = str[j];
	str[j] = temp;
	for(i=0;i<3;i++)
	{
		printf("%s\n",str[i]);
	}
}
