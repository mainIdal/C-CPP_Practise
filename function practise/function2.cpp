#include <stdio.h>
void printPattern(int lines);

int main(void)
{
	int line;
	printf("Enter the number of lines you want to see for this pattern: ");
	scanf("%d", &line);
	printPattern(line);
	return 0;
}
void printPattern(int lines)
{
	int foo,bar;
	for(foo=1;foo<=lines;foo++)
	{
		for(bar=lines;bar>=foo;bar--)
		{
			printf("*");
		}
		printf("\n");
	}
}
