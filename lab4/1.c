/*copy the given array into another array*/

#include<stdio.h>
int main ()
{
    int array[100] = {1,2,3,4,5,6,7,8,9,10};
    int arr[100];
    int i, array_size = 10;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        arr[i] = array[i];
    }

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
