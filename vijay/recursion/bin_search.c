#include<stdio.h>
int mid;
void bin_search(int*,int,int,int);
void main()
{
	int a[] = {1,2,3,4,5,6,7 };
	int up = sizeof(a)/sizeof(a[0]) - 1;
	int key = 15;
	bin_search(a,0,up,key);
}

void bin_search(int *a,int lw, int up,int key)
{
	if (lw < up)
	{
		mid = (lw + up)/2;
	}
	else {
		printf("element not found\n");
		return;
		}
	if( a[mid] == key) {
		printf("element is found\n");
		return;
	} else if(key < a[mid]) {
		up = mid - 1;
		bin_search(a,lw,up,key);
	} else if(key >a[mid]) 
	{
		lw = mid + 1;
		bin_search(a,lw,up,key);
	}
}
