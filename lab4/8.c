/*Cyclically permute the elements of an array*/

#include <stdio.h>
int main ()
{
    int array[30] = {1,2,3,4,5,6,7,8,9,10};
    int i, array_size = 10;

    for (i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    array[array_size] = array[0];
    for (i = 0; i < array_size; i++)
    {
        array[i] = array[i+1];
    }
    for (i = 0; i < array_size; i++)
        printf ("%d ", array[i]);

    return 0;
}
