/* Merge the Elements of two Sorted Array. Access the array using pointer */

#include <stdio.h>
int main()
{
    int array1[100] = {8, 2, 18, 19, 11, 14, 15, 7, 1, 4};
    int array2[100] = {10, 5, 20, 12, 16, 13, 17, 3, 6, 9};
    int i, j, temp = 0, array_size = 0, array_size1 = 10, array_size2 = 10;
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
        array_size1++;
        *(p+i)=*(q+j);
    }

    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        for(j = i+1; j < array_size; j++)
        {
            if(*(p+i) > *(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }

    printf("\n");

    return 0;
}
