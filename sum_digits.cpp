#include <stdio.h>

int main(void)
{
	int sum=0,number,r,counter;
	printf("Please enter the number: ");
	scanf("%d", &number);
	for(counter = number;counter >= 1;counter = counter / 10)
	{
		r = counter % 10;
		sum = sum + r;
	}
	printf("%d",sum);
	return 0;
}
