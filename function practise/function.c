#include <stdio.h>
void printLine(int blanks,int stars);
void printPattern(int side,int way);

int main(void)
{
	int length,direction;
	printf("Enter the lenght and direction(1 or -1): ");
	scanf("%d %d", &length, &direction);
	printPattern(length,direction);
	printPattern(length,direction-2);
	return 0;
}
void printPattern(int side,int way)
{
	int foo;
	for(foo=1;foo<=side;foo++)
	{
		if(way == 1)
			printLine(side-foo,foo);
		else
			printLine(foo-1,side-foo+1);
		printf("\n");
	}
}

void printLine(int blanks,int stars)
{
	int c;
	for(c=0;c<blanks+stars;c++)
	{
		if(c<blanks)
			printf(" ");
		else
			printf("*");
	}
}

