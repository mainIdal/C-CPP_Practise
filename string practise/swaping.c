#include <stdio.h>
void swap(int *x,int *y);

int main(void)
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1,&num2);
    swap(&num1,&num2);
    printf("The first number changed as %d and the second one changed as %d.", num1,num2);
    return 0;
}
void swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
