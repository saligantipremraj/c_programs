#include<stdio.h>
struct p
{
	int x,y;
};
void main()
{
	struct p a[4],*p1;
	int i;
	p1 = a;
	for(i=0;i<4;i++)
	{
		printf("enter elements of structure");
		scanf("%d%d",&a[i].x,&a[i].y);
	}
	for(i=0;i<4;i++)
	{
		printf("%d  %d\n",p1++->x,p1->y)
	}
}
