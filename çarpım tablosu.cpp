#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int foo,bar;
	for(foo = 1;foo < 11; foo++)
	{
		for(bar = 1; bar < 11; bar++)
		{
			printf("%d\t",foo * bar);
		}
		printf("\n");	
	}
	
	system("PAUSE");
	return 0;
}
