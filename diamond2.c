#include <stdio.h>

int main(void)
{
	int i,j,c,side;
	printf("Enter a positive integer number greater than 2 or equal: ");
	scanf("%d", &side);
	while(side<2)
	{
		printf("Enter a positive integer number greater than 2 or equal: ");
	 	scanf("%d", &side);	
	}
	for(i=1;i<=(2*side-1)/2+1;i++)
	{
		for(c=1;c<=(side-i);c++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=side-1;i>=1;i--)  //Actually , side-1 is (2*side-1-1)/2.  it is just 1 less than 2*side-1.
	{
		for(c=1;c<=(side-i);c++)
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
