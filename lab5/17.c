/*  Declare another array with five (5) values and merge two array
    into one array. Access the array using pointer */

#include <stdio.h>
int main()
{
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100] = {11, 12, 13, 14, 15};
    int array_size1 = 10;
    int array_size2 = 5;
    int i, j, array_size = 0;
    int *p, *q;

    p = array1;
    q = array2;

    array_size = array_size1 + array_size2;

    for(i = 0; i < array_size1; i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\n");

    for(i = 0; i < array_size2; i++)
    {
        printf("%d ",*(q+i));
    }

    printf("\n");

    for(i = array_size1, j = 0; i <= array_size; i++, j++)
    {
        *(p+i) = *(q+j);
    }

    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\n");

    return 0;
}
