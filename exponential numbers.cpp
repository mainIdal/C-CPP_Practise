#include <stdio.h>
#include <math.h>
int main(void)
{
	int value1, value2,r;
	printf("Enter the base number: ");
	scanf("%d", &value1);
	printf("Enter the power number: ");
	scanf("%d", &value2);
	r = pow(value1, value2);
	printf("Result= %d", r);
	return 0;
}
