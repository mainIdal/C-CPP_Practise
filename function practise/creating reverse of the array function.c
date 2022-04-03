#include <stdio.h>

void reverse(int a[],int n);

int main(void)
{
	int num_element,i;
	printf("Enter the number of elements for the array: ");
	scanf("%d", &num_element);
	int array[num_element];
	for(i=0;i<num_element;i++)
	{
		printf("Enter the %d. element of the array: ", i+1);
		scanf("%d", &array[i]);
	}
	reverse(array,num_element);
	printf("Reverse of the array is: ");
	for(i=0;i<num_element;i++)
	{
		printf("%d ", array[i]);
	}
	return 0;	
}
void reverse(int a[],int n)
{
	int i,swap;
	for(i=0;i<n/2;i++)
	{
		swap=a[i];
		a[i] = a[n-i-1];
		a[n-i-1]=swap;
	}
}
