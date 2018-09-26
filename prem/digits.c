#include <stdio.h>
void main(){
	
	int n,r=0;
	printf("enter any number:\n");
	scanf("%d",&n);
	
	loop:
	r=0;
	while(n>0){

		r=r+n%10;
		n=n/10;
}
	if(r>9){
		n=r;
		goto loop;
}

	printf("%d",r);
}
