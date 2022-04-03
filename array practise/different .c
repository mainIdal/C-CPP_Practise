#include <stdio.h>

int main(void)
{
    int counter,counter2,element_num,flag=0;
    printf("Enter the element number of the array: ");
    scanf("%d", &element_num);
    int array[element_num];
    for(counter=0;counter<element_num;counter++)
    {
        printf("Enter the %d. element: ", counter+1);
        scanf("%d", &array[counter]);
    }
    for(counter=0;counter<element_num;counter++)
    for(counter2=counter+1;counter2>counter;counter2--)
        {
            if(array[counter2]==array[counter])
                flag=1;
            if(flag!=1)
                printf("%d ",array[counter2]);
        }
    return 0;
}
