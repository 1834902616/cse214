/*  Declare another array with ten (10) values and compare both
    arrays whether they are same or not. Access the array using pointer */

#include <stdio.h>
int main()
{
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_size = 10, count = 0;
    int i;
    int *p, *q;

    p = &array1[0];
    q = &array2[0];

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(q+i));
    }

    for(i = 0; i < array_size; i++)
    {
        if(*(p+i) == *(q+i))
            count++;
    }

    if(count == array_size)
    {
        printf("\nTwo array are same\n");
    }
    else
    {
        printf("\nTwo array are not same\n");
    }

    return 0;
}
