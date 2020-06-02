/*Insert a value X(take input X from user)in the array at third(3rd)index
and shift all other value to right. And print the whole array.*/

#include<stdio.h>
int main ()
{
    int array[100] = {1,2,3,4,5,6,7,8,9,10};
    int X, i, position = 3, array_size=10;
    scanf("%d",&X); //value input
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    array_size++;
    for( i = array_size - 1; i >= position - 1; i--)
    {
        array[i+1] = array[i];
    }
    array[position-1] = X;
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
