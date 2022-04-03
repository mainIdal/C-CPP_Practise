#include <stdio.h>

void func(int a[],int b[],int n,int *z); //z is number of terms greater the arithmetic mean value.

int main(void)
{
	int size,i,z;
	printf("Enter the array size: ");
	scanf("%d",&size);
	int arr1[size],arr2[size];
	printf("Enter %d integers: ", size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr1[i] );
	}
	func(arr1,arr2,size,&z);
	printf("Element(s) above the mean: ");
	for(i=0;i<z;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;	
}
void func(int a[],int b[],int n,int *z)
{
	int i,j=0,sum=0,mean;
	*z = 0;
	for(i=0;i<n;i++)
		sum = sum + a[i];
	mean = sum / (double)n;
	printf("mean value of the array: %d\n", mean);
	for(i=0;i<n;i++)
	    if(a[i] > mean){
		b[j] = a[i];
		j++;
		(*z)++; }
}
