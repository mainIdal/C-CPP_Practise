#include<stdio.h>
void reverse(char arr1[],char arr2[],int n);

int main(void)
{
    int num,i;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    char array[num],array2[num];
    for(i=0;i<num;i++)
    {
        printf("Enter the %d. element: ", i+1);
        scanf(" %c",&array[i]);
    }
    reverse(array,array2,num);
    printf("the original array is: ");
    for(i=0;i<num;i++)
        printf("%c ", array[i]);
    printf("\nthe reverse array is: ");
    for(i=0;i<num;i++)
        printf("%c ", array2[i]);
    return 0;
}
void reverse(char arr1[],char arr2[],int n)
{
    int counter;
    for(counter=0;counter<n;counter++)
        arr2[counter] = arr1[n-counter-1];
}
