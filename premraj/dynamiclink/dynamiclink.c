#include<stdio.h>

void main()
{
	int (*fp)(int,int);

	void *handle;

	handle = dlopen("libtester.so",RTLD_NOW);

	fp = dlsym(handle,"add");

	printf("%d",fp(30,50));

	dlclose(handle);
}
