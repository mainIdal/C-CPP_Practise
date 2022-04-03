#include<stdio.h>

int main(void)
{
	int element_num,counter,counter2,unique;
	printf("Enter the number of the elments: ");
	scanf("%d", &element_num);
	int array[element_num];
	for(counter=0;counter<element_num;counter++)
	{
		printf("Enter the %d. element: ", counter+1);
		scanf("%d", &array[element_num]);
			for(counter2=0;counter2<counter;counter2++)
		{
			if(array[counter] == array[counter2+1])
				;
			else
				unique = array[counter2];
		}
	}
		printf("The unique element is %d", unique);
		return 0;
}
