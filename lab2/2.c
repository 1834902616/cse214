/*Insert a value X(take input X from user) in the array at the end of currently stored elements.*/

#include<stdio.h>
int main ()
{
    int array[100] = {1,2,3,4,5,6,7,8,9,10};
    int X, i, array_size=10;
    scanf("%d",&X); //value input
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    array[10] = X;
    array_size++;
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
