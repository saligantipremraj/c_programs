#include<stdio.h>
void main()
{
	int a= 17,p=2,s,res;
	s=(a>>p);
	s=~s;
	s=s<<p;
	res=a||s;
	printf("%d",res);
}
