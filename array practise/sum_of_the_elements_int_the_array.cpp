#include <stdio.h>

int main(void)
{
	int counter,num_of_elements,sum=0;
	printf("Enter the number of elements: ");
	scanf("%d",&num_of_elements);
	int array[num_of_elements];
	for(counter=0;counter<num_of_elements;counter++)
	{
		printf("Enter the %d. element: ", counter+1);
		scanf("%d",&array[counter]);
		sum+=array[counter];
	}
	printf("Sum of the elements stored in the array is %d",sum);
	return 0;
}
