/* Reverse the given array within the same array. Access the array using pointer. */

#include<stdio.h>
int main()
{
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10];
    int array_size = 10, count = 0;
    int i;
    int *p, *q;

    p = array1;
    q = array2;

    for(i = 0; i < array_size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i = 0; i <= array_size; i++)
    {
        count = *(p + array_size-i);
        *((q+i)-1) = count;
    }

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(q+i));
    }
    printf("\n");

    return 0;
}
