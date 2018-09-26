#include<stdio.h>

void inBit(unsigned char);

void main()
{
		unsigned char num;

		//for(num = 0 ; num <= 255 ; num++) "gives infinite loop because after 255 num++ gives 0, condition true" 
		for(num = 255 ; num >= 254 ; num--)
			{
				printf("decimal %d is same as :",num);
				inBit(num);
				printf("\n");
			}
		
}

void inBit(unsigned char n)
{
		signed char i;
		unsigned char j,k,mask;

		for(i=128 ; i>=0 ; i--)
			{
					mask = i;
					k = 1<<mask;
					j = n & k;

					(j == 0)?printf("0"):printf("1");

			}
}
