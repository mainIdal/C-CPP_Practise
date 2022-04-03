#include <stdio.h>

int main(void)
{
	int counter,number_of_elements,swap;
	printf("Enter the number of elements: ");
	scanf("%d", &number_of_elements);
	int array[number_of_elements];
	for(counter=0;counter<number_of_elements;counter++)
	{
		printf("Enter the %d. element: ",counter+1);
		scanf("%d", &array[counter]);
	}
	for(counter=0;counter<number_of_elements/2;counter++)
	{
		swap=array[number_of_elements-counter-1];
		array[number_of_elements-counter-1] = array[counter];
		array[counter] = swap;
	}
	for(counter=0;counter<number_of_elements;counter++)
	{
		printf("%d ", array[counter]);
	}
	return 0;
}
