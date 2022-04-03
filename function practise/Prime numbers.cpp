#include <stdio.h>
int checkPrime(int number);

int main(void)
{
	int number,prime_number=0,flag,counter;
	printf("Enter the number: ");
	scanf("%d", &number);
	for(counter=number+1;prime_number<5;counter++)
	{
		flag = checkPrime(counter);
		if(flag==0)
		{
			printf("%d ",counter);
			prime_number++;
		}
	}
	printf("are prime numbers.");
	return 0;
}
int checkPrime(int number)
{
	int divider,flag=0;
	for(divider=2;divider<number;divider++)
	{
		if(number % divider == 0)
		flag=1;
	}
	return flag;
}

