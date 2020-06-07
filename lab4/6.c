/*Merge the Elements of two sorted array*/

#include<stdio.h>
int main()
{
    int a[5] = {8,13,45,6,9}, size_a = 5;
    int arr[5] = {5,4,3,16,20}, i, j, size_arr = 5;
    int array[10], temp = 0;
    int size_array = size_a + size_arr;
    for(i = 0; i < size_a; i++)
    {
        array[i] = a[i];
    }
    for(i = 0, j = size_a; i < size_array; i++,j++)
    {
        array[j] = arr[i];
    }
    for(i = 0; i < size_array; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i = 0; i < size_array; i++)
    {
        for(j = i + 1; j < size_array; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(i = 0; i < size_array; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
