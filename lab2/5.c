/*Update 5th index with another value.And print the whole array.*/

#include<stdio.h>
int main ()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10} ;
    int value = 15, array_size = 10;
    for (int i = 0 ; i < array_size ; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    array[4] = value;
    for (int i = 0 ; i < array_size ; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
