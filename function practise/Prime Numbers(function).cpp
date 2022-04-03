#include <stdio.h>
#include <stdlib.h>
int checkPrimeNumbers(int number);

int main(void)
{
	int c,flag,num1,num2;
	do{
	printf("Enter two postive integer numbers (second number must be greater than first): ");
	scanf("%d%d", &num1,&num2);
	}while(num1>=num2 || num1<0);
	printf("Prime Numbers between %d and %d are ", num1,num2);
	for(c=num1+1;c<num2;c++)
	{
		flag = checkPrimeNumbers(c);
		if(flag == 0)
		printf("%d ",c);
	}
	system("PAUSE");
	return 0;
}
int checkPrimeNumbers(int number)
{
	int c,flag=0;
	for(c=2;c<number;c++)
	{
		if(number%c==0)
		flag = 1;	//this line means that there is a number which can divide that number.
	}
	return flag;
}
