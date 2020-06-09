/*Cyclically permute the elements of an array. Access the array using pointer */

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_size = 10;
    int i;
    int *p;
    p = array;
    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");

    *(p + array_size) = *(p+0);

    for (i = 0; i < array_size; i++)
    {
        *(p+i) = *((p+i)+1);
    }

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }

    return 0;
}
