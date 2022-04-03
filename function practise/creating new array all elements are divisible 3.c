#include <stdio.h>

void divisible_3_array(int a[],int b[],int n,int *c);

int main(void)
{
	int element_num,i,c;
	printf("Enter the element number of the array: ");
	scanf("%d", &element_num);
	int array1[element_num],array2[element_num];
	for(i=0;i<element_num;i++)
	{
		printf("Enter the %d. element of the array: ", i+1);
		scanf("%d", &array1[i]);
	}
	divisible_3_array(array1,array2,element_num,&c);
	printf("Elements ara divisible by 3 are: ");
	for(i=0;i<c;i++)
	{
		printf("%d ", array2[i]);
	}
	return 0;
}
void divisible_3_array(int a[],int b[],int n,int *c)
{
	int i;
	*c=0;
	for(i=0;i<n;i++)
	{
		if(a[i] % 3 == 0){
		   b[*c]=a[i];	
		   (*c)++;
		}
	}
}
