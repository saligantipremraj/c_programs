#include <stdio.h>

struct city {
	char urban[10];
 	char *str;
	};

struct town {
	char *rural;
 	struct city c;
	};

int main()
{
	struct town tn = {"jaipur","hyd","mysore"};
	
	printf("%s,%s\n",tn.rural,tn.c.str);
	printf("%s,%s\n",++tn.rural,++tn.c.str);
}
