/*Insert a value X(take input X from user)in the array at
Kth(take input K from user)index and shift all other value to right.
And print the whole array*/

#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,5,6,7,8,9,10};
    int X, i, K, array_size = 10;
    scanf("%d",&X); //value input
    scanf("%d",&K); //index input
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    array_size++;
    for( i = array_size - 1; i >= K - 1 ; i--)
    {
        array[i+1] = array[i];
    }
    array[K-1] = X;
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
