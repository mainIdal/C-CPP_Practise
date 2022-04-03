#include <stdio.h>
#include <stdlib.h>
void printPattern(int side);
int checkSide(int integer);

int main(void)
{
	int side;
	do{
	side = checkSide(side);
	printPattern(side);
	}while(side != 0);
	system("PAUSE");
	return 0;
}
int checkSide(int integer)
{
	do{
		printf("Enter the side which is an odd number and bigger than 7 or equal: ");
		scanf("%d", &integer);
	}while((integer < 7 || integer % 2 == 0) && integer != 0);
	if(integer == 0)
	 printf("Goodbye!\n");
	else 
	 return integer;
}
void printPattern(int side)
{
	int foo,bar;
	for(foo=1;foo<=side;foo++)
	{
		for(bar=1;bar<=side;bar++)
		{
			if(foo==1 || foo==side || bar==1 || bar==side || foo == bar || foo+bar==side+1)  
			 printf("*");
			else
			 printf(" ");
		}
		printf("\n");
	}
}
