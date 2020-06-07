/*Reverse the given array within the same array*/

#include<stdio.h>
int main ()
{
    int array[100] = {1,2,3,4,5,6,7,8,9,10};
    int i, j, temp = 0, array_size = 10;
    int arr[100];

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i = 0, j = array_size - 1; i < array_size/2; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    for(i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
