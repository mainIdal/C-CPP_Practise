#include<stdio.h>

int main(void)
{
	int counter,elements_num,dublicate=0;
	printf("Enter the number of the elements: ");
	scanf("%d", &elements_num);
	int array[elements_num];
	for(counter=0;counter<elements_num;counter++)
	{
		printf("Enter the %d. element: ", counter+1);
		scanf("%d", &array[counter]);
		if(array[counter] == array[counter-1])
		dublicate=dublicate+1;
	}
	printf("Total number of duplicate elements found in the array is : %d",dublicate);
	return 0;
}
