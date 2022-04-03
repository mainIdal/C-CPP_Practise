#include<stdio.h>
#include <stdio.h>
#include <math.h>
#define n_num 20

int main()
{
	int total = 0,num,c;
	float average = 0;
	for(c = 0;c < n_num; c++)
	{
		printf("Please, enter the %d. integer number: ", c+1);
		scanf("%d", &num);
		total = total + pow(num,2);
		average = total / (c+1);
	}
	
	printf("Total of the squares: %d\n", total);
	printf("Average of the squares: %.2f\n", average);
	
	system("PAUSE");
	return 0;
}
