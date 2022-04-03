#include <stdio.h>
#include <stdlib.h>
int checkNumber(int number);
void printPattern(int side);


int main(void)
{
	int side = checkNumber(side);
	printPattern(side);
	system("PAUSE");
	return 0;
}
int checkNumber(int number)
{
	do{
		printf("Enter the number which is greater than 8 or equal: ");
		scanf("%d", &number);
	}while(number < 8);
	return number;
}
void printPattern(int side)
{
	int foo,bar;
	for(foo=1;foo<=side;foo++)
	{
		for(bar=1;bar<=2*side-1;bar++)
		{
			if(bar==1 || foo==1 || bar==2*side-1 || foo==side || foo==bar || foo+bar==2*side || bar == side)
			 printf("*");
			else
			 printf(" ");
		}
		printf("\n");
	}
}
