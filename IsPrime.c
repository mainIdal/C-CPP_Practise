#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int c,control,result;
	int number;
	printf("Please, enter an integer number: ");
	scanf("%d", &number);
	if(number < 2)
	{
		printf("%d is not a prime number.\n", number);
		goto label;
	}
	
	for(c = 2; c < number;c++)
	{
		result = number % c;
		
		if(result == 0)
		{
			control = 1;
			break;
		}	
	}
	
	if(control == 1)
	{
		printf("%d is not a prime number.\n", number);
	}
	else
	{
		printf("%d is a prime number.\n", number);
	}
	label:
		system("PAUSE");
		return 0;	
}
