#include <stdio.h>

int main(void)
{
	int counter=0,elements_num;
	printf("Enter the number of elements: ");
	scanf("%d", &elements_num);
	int array1[elements_num],array2[elements_num];
	while(counter<elements_num)
	{
		printf("Enter the %d. elements of the array: ", counter+1);
		scanf("%d",&array1[counter]);
		array2[counter]=array1[counter];
		counter++;
	}
	printf("The elements stored in the first array are: \n");
	for(counter=0;counter<elements_num;counter++)
		printf("%d ",array1[counter]);
	printf("\nThe elements copied into the second array are: \n");
	for(counter=0;counter<elements_num;counter++)
		printf("%d ",array2[counter]);
	return 0;
}
