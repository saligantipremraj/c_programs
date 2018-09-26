
#include <stdio.h>
#include <stdlib.h>

void game(int **);

void main()
{
	int *p;

	game(&p);

	printf("Address:%p\n",p);

	*p = 100;

	printf("Value saved:%d\n",*p);

}


void game(int **p)
{
	int *k;
	k = *p = malloc(4);

	printf("Malloc Address:%p\n",k);
}
