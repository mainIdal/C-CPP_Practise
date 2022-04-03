#include <stdio.h>

int main(void)
{
	char star = '*';
	int i,j,side;
	printf("Enter an odd positive integer number which is greater than 5 or equal: ");
	scanf("%d", &side);
	while(side != -1)
	{
		while(side < 5 || side % 2 == 0)
		{
			if(side != -1)
			{
			printf("Enter an odd positive integer number which is greater than 5 or equal: ");
			scanf("%d", &side);
			}
			else
				goto label;
		}
		for(i=1;i<=side;i++)
		{
			for(j=1;j<=2*side-1;j++)
			{
				if(i==1 || i==j || i+j==side*2)
				{
					printf("%c", star);
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("Enter an odd positive integer number which is greater than 5 or equal: ");
		scanf("%d", &side);
	}
	label:
	printf("Bye");
	return 0;
}
