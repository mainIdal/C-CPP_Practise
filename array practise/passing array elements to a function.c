#include <stdio.h>
// write a function to find max which receives an integer array of five numbers as a parameter and returns the maximum of those numbers
int find_max(int a[]){
    int i,max;
    max=0;
    for(i=0;i<5;i++)
        if(a[i] > max)
        max=a[i];
    return max;
}
int main(void)
{
    int array[5],counter;
    for(counter=0;counter<5;counter++){
        printf("Enter the %d. element of the array: ", counter+1);
        scanf("%d", &array[counter]);
    }
    printf("Max number of the array is %d", find_max(array));
    return 0;
}
