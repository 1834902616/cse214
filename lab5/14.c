/* Copy the given array into another array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100];
    int array_size = 10, count = 0;
    int i;
    int *p, *q;

    p = array1;
    q = array2;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        count = *(p+i);
        *(q+i) = count;
    }

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(q+i));
    }
    printf("\n");
    return 0;
}

