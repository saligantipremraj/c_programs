#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main()
{
signed char s[MAX];
char ch;
int i;

while((ch = getchar()) != '\n')
    {
	if(!isdigit(ch))
	   {
	    if(ch == '"')
		{
		  
		   printf("%s",ch);
                   
		   break;
		}
	   break;  

           }
	
	if()
    }
}
