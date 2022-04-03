#include <stdio.h>

int main(void)
{
	int a[10];
	int c,b;
	for(c=0;c<10;c++)
	{
		printf("Enter the element-%d: ", c+1);
		scanf("%d",&b);
		a[c]=b;
	}
	printf("Elements in array are ");
	for(c=0;c<10;c++)
	{
		printf("%d ",a[c]);
	}
	return 0;
}
