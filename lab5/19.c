/*  Split an Array after Kth (take input K from user) elements
    into two different Arrays. Access the array using pointer */

#include <stdio.h>
int main ()
{
    int a[100]= {1,2,3,4,5,6,7,8,9,10};
    int arr[100];
    int arr2[100];
    int i, a_size = 10, K;
    int *p, *q, *r;
    p = a;
    q = arr;
    r = arr2;
    for (i = 0; i < a_size; i++)
    {
        printf("%d ", *(p+i));
    }
    printf("\n");
    scanf("%d", &K);
    for (i = 0; i < K; i++)
    {
        *(q+i) = *(p+i);
    }
    for (i = 0; i < K; i++)
    {
        printf("%d ", *(q+i));
    }
    printf("\n");
    for (i = K; i < a_size; i++)
    {
        *(r+i) = *(p+i);
        printf("%d ", *(r+i));
    }

    return 0;
}

