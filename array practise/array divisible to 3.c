#include<stdio.h>
void func(int size_a,int *size_b,int a[],int b[]);

int main(void)
{
    int counter,n,s;
    printf("Enter the number of elements(max 30): ");
    scanf("%d", &n);
    int array[n],new_array[n];
    printf("Enter the %d element of the array: ",n);
    for(counter=0;counter<n;counter++){
    scanf("%d", &array[counter]);
    }
    func(n,&s,array,new_array);
    printf("New array: ");
    for(counter=0;counter<s;counter++)
        printf("%d ", new_array[counter]);
    return 0;
}
void func(int size_a,int *size_b,int a[],int b[])
{
    int i,count=0;
    for(i=0;i<size_a;i++)
    if(a[i]%3==0){
        b[count]=a[i];
        count++;}
    *size_b=count;
}
