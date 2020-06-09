/* Calculate the summation of all elements of the given array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_size = 10, sum = 0;
    int i;
    int *p;

    p = array;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        sum += *(p+i);
    }

    printf("\n%d\n", sum);

    return 0;
}
