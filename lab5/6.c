/*  Update Kth (take input K from user) index with the value “X”
    (take input X from user). And print the whole array. Access
    the array using pointer */

#include<stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_size = 10;
    int i, X, K;
    int *p;

    scanf("%d",&K);

    scanf("%d",&X);

    p = array;

    for(i = K-1; i < array_size; i++)
    {
        *(p+i) = X;
        break;
    }
    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        printf("%d ", *(p+i));
    }

    return 0;
}
