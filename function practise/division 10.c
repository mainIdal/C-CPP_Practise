#include <stdio.h>
#include <stdlib.h>
void takeandCheckNumbers(int num1,int num2);
void printSumAndNumber(int num1,int num2);
int calculateNumber(int num1,int num2);
int calculateSum(int num1,int num2);

int main(void)
{
	int x,y;
	takeandCheckNumbers(x,y);
	system("PAUSE");
	return 0;
}
void takeandCheckNumbers(int num1, int num2)
{
	do{
		printf("Enter two integer numbers (secon number must be bigger than first number): ");
		scanf("%d %d", &num1, &num2);
	}while(num1>=num2);
	printSumAndNumber(num1,num2);
}
void printSumAndNumber(int num1,int num2)
{
	if(calculateNumber(num1,num2)==1)
	printf("%d number can be divided by 10 between %d and %d ,and their sum is %d\n", calculateNumber(num1,num2),num1,num2,calculateSum(num1,num2));
	else
	printf("%d numbers can be divided by 10 between %d and %d ,and their sum is %d\n", calculateNumber(num1,num2),num1,num2,calculateSum(num1,num2));
}
int calculateNumber(int num1,int num2)
{
	int c,number=0;
	for(c=num1;c<=num2;c++)
	{
		if (c%10==0){
			number++;
		}
	}
	return number; 
}
int calculateSum(int num1,int num2)
{
	int c,sum=0;
	for(c=num1;c<=num2;c++)
	{
		if(c%10==0)
		sum=sum+c;
	}
	return sum;
}
