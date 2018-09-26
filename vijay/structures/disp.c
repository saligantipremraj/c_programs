#include<stdio.h>
struct vijay
{
	int x,y;
};
struct vijay disp(struct vijay, struct vijay);
void main()
{
	struct vijay p1={10,12};
	struct vijay p2;
	printf("%x %x\n",p1.x,p1.y);
	p2 = disp(p1,p2);
	printf("%x %x\n",p2.x,p2.y);
}


struct vijay disp(struct vijay p1, struct vijay p2)
{
	p2 = p1;
	return p2;
}
