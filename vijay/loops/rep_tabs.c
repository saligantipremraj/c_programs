#include<stdio.h>
void main()
{
	char *in = "abc\\txyz\\nijk\\tmnop";
	char *n = "\\t";
	char *t = "\\n";
	char *des ;
	
	int i,j = 0;
	for(i = 0; in[i] != '\0';i++)
	{
		for(j= 0; in[i] == n[j] && j<3; j++)
		{
			i++;
		}
		i -= 2;
		if(j == 2)
		{
			for(j=0;j<3;j++)
			{
				*(des+i)
			
		
}
