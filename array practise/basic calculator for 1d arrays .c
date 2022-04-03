#include <stdio.h>
#include <stdlib.h>

void calculate(int a[],int b[],char op[],double result[],int n);

int main(void)
{
	int i,flag=1,size;      // we created a flag to check the operators that the user will type.
	printf("How many elements are there: ");
	scanf("%d",&size);
	int arr1[size],arr2[size];
	double result[size];
	char op[size];
	printf("Enter first set of integers: ");
	for(i=0;i<size;i++)
		{
			scanf("%d",&arr1[i]);
		}
	printf("Enter second set of integers: ");
	for(i=0;i<size;i++)
		{
			scanf("%d",&arr2[i]);
		}
	printf("Enter a set of operators('+','-','*','/'): ");
	for(i=0;i<size;i++)
		{
			scanf(" %c",&op[i]);
			if( (op[i] != '+') && (op[i] != '-') && (op[i] != '*') && (op[i] != '/') )  // Checks for wrong operators
				flag = 0;    //if there is a problem with an operator, flag value will be 0.
		}	
	while(flag == 0)        // blocks to type a wrong operator.
	{
		printf("You typed wrong operator(s) !\n");
		printf("Re-Enter a set of operators('+','-','*','/'): ");
		flag=1;            // we changed flag value with 1 because we will change it with 0 if there is a problem with an operator.
	for(i=0;i<size;i++)
		{
			scanf(" %c",&op[i]);
			if( (op[i] != '+') && (op[i] != '-') && (op[i] != '*') && (op[i] != '/') )
				flag = 0;
		}
	}
	calculate(arr1,arr2,op,result,size);
	printf("The resultant array:\n");
	for(i=0;i<size;i++)
	{
		if(arr2[i] == 0 && op[i] == '/')
			printf("%5d	  %c	 %5d = undefined(a number/0)\n",arr1[i],op[i],arr2[i]);
		else
			printf("%5d	  %c	 %5d =     %5.2lf\n",arr1[i],op[i],arr2[i],(double)result[i]);
	}
	system("PAUSE");
	return 0;
}
void calculate(int a[],int b[],char op[],double result[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(op[i]== '+')
		result[i] = a[i] + b[i];
		if(op[i]== '-')
		result[i] = a[i] - b[i];
		if(op[i]== '*')
		result[i] = a[i] * b[i];
		if(op[i]== '/')
		{
			if(b[i]==0)
				;
			else	
			result[i] = a[i] / (double)b[i];
		}
	}
}
