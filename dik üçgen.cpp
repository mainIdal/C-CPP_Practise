#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int foo,bar;
	for(foo=0;foo<10;foo++)
	{
		printf("*");
		for(bar=0;bar != foo;bar++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
		for(foo=10;foo>0;foo--)
	{
		for(bar=0;bar != foo;bar++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
}
