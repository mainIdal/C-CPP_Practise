#include<stdio.h>
#include<stdlib.h>
void polynomial_func(int arr[],int degree);
void find_derivative(int arr[],int degree,int order);

int main(void)
{
	int i,degree,order;
	do{
	printf("Enter the degree of the polynomial equation(1-10): ");
	scanf("%d",&degree);
	}while(degree<1 || degree>10); //The user must type a number between 1 and 10.
	int coefficient[degree+1]; 	//array size must be degree+1 because the program has to store degree+1(degree-0+1) values.
	for(i=degree;i>=0;i--)  //counter was started from degree because max index number for an array is array's size-1 which is degree+1-1= degree. 
	{
		printf("Enter the coefficient of x to the power of %d: ", i);
		scanf("%d", &coefficient[i]);
	}
	printf("Entered polynomial:\n");
	polynomial_func(coefficient,degree);
	printf("\nWhich degree of derivative you want to calculate: ");
	scanf("%d",&order);
	find_derivative(coefficient,degree,order);
	printf("\n");
	system("PAUSE");
	return 0;
}
void polynomial_func(int arr[],int degree)
{
	int i;
	printf("f(x)=");
	for(i=degree;i>=0;i--)  //My goal here is to print all polynomial terms except the one has 0 coefficient.
	
		if(i == 0)  //when the program reached the last term, it applies one of these steps.
		{
			if(arr[i] > 0)
				printf("+%d",arr[i]);  //If the last term is positive, print it with + sign.
			else if(arr[i] < 0)	
				printf("%d",arr[i]);  //If the last term is negative, just print it.
		}
		else    //the program applies these steps to all terms except last one.
		{
			if(arr[i] != 0)
				printf("%dx^%d",arr[i],i);  //If a coefficient is different from zero, print it with its x's degree.
			if(arr[i-1] > 0 && (i-1) != 0)
				printf("+");  //If the next term is positive and it is not the last term, print '+' sign after the term.
		}
}
void find_derivative(int arr[],int degree,int order)
{
	int i,j;
	printf("%d. derivative: df(x)=",order);				
	if(order > degree)		
		printf("0");	//If the number of taking derivative is greater than degree of a polynomial function, the result is 0.
	else
	{
		for(i=0;i<order;i++)
			for(j=degree;j>=0;j--)
				arr[j]=arr[j]*(j-i);  //it calculates and then assigns the new coefficient values to the place of the old coefficient values.
				
		for(i=degree;i>=0;i--) //Here,The program doesn't need to check the sign of the last term like the first function because it is 0.
			if(arr[i] != 0 && (i-order)>0)
			{
				printf("%dx^%d",arr[i],i-order); //If the new coefficient is different from zero and new x power is bigger than 0, print it with its new x degree.
				if(arr[i-1] > 0 )
					printf("+");  //If the next term is positive, print '+' sign after the term.
			}
			else if(arr[i] != 0 && (i-order)==0)
				printf("%d",arr[i]);  //If the new coefficient is different from zero and new x power is 0, just print new coefficient.
			else if(arr[i] == 0 && arr[i-1] > 0)
				printf("+");		//If this term is 0 and the next term is positive print '+' sign instead of 0 term.
	}	
}


