/*  Delete a value from Kth index (take input K from user) from the
    array shift all other value to left. And print the whole array.
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_size = 10;
    int i, K;
    int *p;

    scanf("%d",&K);

    p = array;

    for (i = K-1; i < array_size; i++)
    {
        *(p+i) = *((p+i)+1);
    }

    array_size--;

    printf("\n");

    for(i = 0; i < array_size; i++)
        printf("%d ",*(p+i));

    return 0;
}
