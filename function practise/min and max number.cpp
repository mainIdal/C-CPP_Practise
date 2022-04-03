#include <stdio.h>
#include <stdlib.h>
/*
The program will find the minumum and maxiumum value.
User can enter how many number as he or she wish.
The program will terminate when user write -1234
*/
int checkNumber(int number);
int determineMinAndMax(int number);
int printMinAndMax(int min_num,int max_num);

int main(void)
{
	int number;
	printf("Enter the number(to quit write 0): ");
	scanf("%d", &number);
	checkNumber(number);
	system("PAUSE");
	return 0;	
}
int checkNumber(int number)
{
	if(number == 0)
		printf("Bye Bye\n");
	else
	{
		determineMinAndMax(number);
		printf("Bye Bye\n");
	}	
}
int determineMinAndMax(int number)
{
	int min=number,max=number;
	while(number != 0){
		if(number >= max){
			max = number;
		}
		else if (number <= min){
			min = number;
		}
		printf("Enter the number(to quit write 0): ");
		scanf("%d", &number);
	}
	printMinAndMax(min,max);
}
int printMinAndMax(int min_num,int max_num)
{
	printf("The minumum number you entered is %d\n", min_num);
	printf("The maximum number you entered is %d\n", max_num);
}


