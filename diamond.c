#include <stdio.h>

int main(void)
{
	int i,j,c,side;
	printf("Enter an odd positive integer number greater than 5 or equal: ");
	scanf("%d", &side);
	while(side<5 || side%2==0)
	{
		printf("Enter an odd positive integer number greater than 5 or equal: ");
	 	scanf("%d", &side);	
	}
	for(i=1;i<=side/2+1;i++)
	{
		for(c=1;c<=(side-i-2);c++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=side/2;i>=1;i--)
	{
		for(c=1;c<=(side-i-2);c++)
		{
			printf(" ");
		}
		for(j=2*i-1;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}
