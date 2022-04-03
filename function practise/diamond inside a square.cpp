#include <stdio.h>
#include <stdlib.h>
float checkNumber(int number);
void firstAndLastLine(int side);
void printPatternTop(int side);
void printPatternBottom(int side);

int main(void)
{
	int side;
	side = checkNumber(side);
	firstAndLastLine(side);
	printPatternTop(side);
	printPatternBottom(side);
	firstAndLastLine(side);
	system("PAUSE");
	return 0;
}
float checkNumber(int number)
{
	do{
		printf("Enter an odd number which is bigger than 5 or equal: ");
		scanf("%d", &number);
	}while(number < 5 || number % 2 == 0);
	return number;
}
void firstAndLastLine(int side)
{
	int c;
	for(c=1;c<=2*side-5;c++)
		printf("*");
	printf("\n");	
}
void printPatternTop(int side)
{
	int c,col,row;
	for(row=1;row<=side/2;row++)
	{
		for(c=1;c<=(side-row-2);c++)
			printf("*");
		for(col=1;col<=2*row-1;col++)
			printf(" ");
		for(c=1;c<=(side-row-2);c++)
			printf("*");
	printf("\n");
	}
}
void printPatternBottom(int side)
{
	int c,col,row;
	for(row=side/2-1;row>=1;row--)
	{
		for(c=1;c<=(side-row-2);c++)
			printf("*");
		for(col=2*row-1;col>=1;col--)
			printf(" ");
		for(c=1;c<=(side-row-2);c++)
			printf("*");
	printf("\n");		
	}
}
