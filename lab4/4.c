/*Declare another array with ten[10]values and compare both arrays
whether they are same or not*/

#include<stdio.h>
int main ()
{
    int array[10] = {10,20,30,40,50,60,70,80,90,100};
    int arr[10] = {10,20,30,4,50,60,70,8,90,100};
    int i, count = 0, array_size = 10;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i = 0; i < array_size; i++)
    {
        printf("%d ",arr[i]);
    }
        printf("\n");
    for(i = 0; i < array_size; i++)
    {
        if(array[i] == arr[i])
        {
            count++;
        }
    }
    if(count == array_size)
    {
        printf("\nBoth arrays are same\n");
    }
    else
    {
        printf("\nBoth arrays aren't same\n");
    }

    return 0;
}

