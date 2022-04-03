#include<stdio.h>

int main(void)
{
	int counter,counter2,element_num,different=0;
	printf("Enter the number of elements: ");
	scanf("%d", &element_num);
	int array[element_num];
	for(counter=0;counter<element_num;counter++)
	{
		printf("Enter the %d. element of the array: ", counter+1);
		scanf("%d", &array[counter]);
	}
	for(counter=0;counter<element_num;counter++)
	{
		for(counter2=element_num-1;counter2+counter==element_num;counter2--)
		{
			if(array[counter] == array[counter2])
			    ;
			else
				different=different+1;
		}
	}
	printf("%d",different);
	return 0;
}
