/*  Search a value “X” (take input X from user) in the array
    and print the location if “X” found in the array otherwise
    print -1. Access the array using pointer */

#include<stdio.h>
int main ()
{
    int array[100]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int X, i, array_size = 10, index;
    int *p;
    p = array;
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    scanf("%d",&X);

    for( i = 0; i < array_size; i++)
    {
        if (X == *(p+i))
        {
            X = 1;
            index = i;
        }
    }
    if ( X == 1)
    {
        printf("%d",index);
    }
    else
    {
        printf("-1");
    }

    return 0;
}

