#include<stdio.h>
int main ()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j, size = 10, temp;
    for( i = 0; i<size ; i++)
    {
        printf ("%d ",array[i]);
    }
    printf("\n");

    for( i = size - 1 ; i >= 0 ; i--)
    {
        printf ("%d ",array[i]);
    }
    return 0;
}


