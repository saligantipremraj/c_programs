#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char s1[]="i am working at informsy";
	char s2[]= "my name is vijay";
	char ch= 'i';
	printf("string s1 is: %s\n",s1);
	printf("string s2 is: %s\n",s2);
	printf("string length of s1 is: %d \n",strlen(s1));
	printf("string length of s1 with max len 10: %d \n",strnlen(s1,10));
	//printf("uppercase of s1: %s \n",strupr(s1));
	printf("string cancatination of s1 and s2 is:%s \n",strcat(s1,s2));
	printf("string cancatination of s1 and s2 with n char is:%s \n",strncat(s1,s2,7));
	printf("string compare of s1 and s2 is: %d \n",strcmp(s1,s2));
	printf("first occurance of char i is :%s \n",strchr(s1,ch));
	printf("searched string of s1 is : %s \n",strstr(s1,"inf"));
}

