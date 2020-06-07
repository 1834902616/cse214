#include<stdio.h>
int main ()
{
    int array[10] = {1,2,3,4,5};
    int arr[10] = {6,7,8,9,10};
    int a[10], i, j, size_a, size_array = 5, size_arr = 5;
    size_a = size_array + size_arr;

    for(i = 0; i < size_array; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i = 0; i < size_arr; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i = 0; i < size_array; i++)
    {
        a[i] = array[i];
    }
    for(i = 0, j = size_array; i < size_arr; i++,j++)
    {
        a[j] = arr[i];
    }
    for(i = 0; i < size_a; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
