/*Update Kth(take input K from user) index with the value X(take input X from user).And print the whole array.*/

#include<stdio.h>
int main ()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10} ;
    int X, K, array_size = 10;

    scanf("%d",&K); //index input
    scanf("%d",&X); //value input
    for (int i = 0 ; i < array_size ; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for (int i = 0 ; i < array_size ; i++)
    {
        if( i == K)
        {
            array[i-1] = X;
        }
    }
    for (int i = 0 ; i < array_size ; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;

}

