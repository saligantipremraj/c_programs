#include<stdio.h>
#include<string.h>
void main()
{
	char s1[]="breakfast1234fast129966";
	char s2[]="fast";
	int i=0,j=0,k; 
	for(i=0;s1[i]!='\0';i++)
	{	
		if (s2[j] == s1[i] )
		{
			k=i;
			i++;
			j++;
			while(s2[j] == s1[i])
			{
				i++;
				j++;
			}
			if(s2[j] == '\0')
			{
				printf("%s \n",s1+k);
				break;
			}
		}
	}
	//if(s2[j] == '\0')
/*	for(;s1[k]!='\0';k++)
		{
		printf("%c",s1[k]);
		}		*/
  // printf("%s \n ",s1+k);		
/*	while(s1[i]!='\0')
	{
		k=i;
		while(s1[i] && s2[j] && s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if(!s2[j])
		{
			printf("%s",s1+k);
		}
		else i++;
	}*/
}
