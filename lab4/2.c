/*Reverse the given array and store it in another array*/

#include<stdio.h>
int main ()
{
    int array[100] = {1,2,3,4,5,6,7,8,9,10};
    int arr[100];
    int i, j, array_size = 10;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    for(i = 0, j = array_size - 1; i <= array_size; i++, j--)
    {
        arr[i] = array[j];
    }

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
