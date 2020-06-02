/*Delete a value from Kth index (take input K from user)from the array shift
all other value to left And print the whole array. */

#include<stdio.h>
int main ()
{
    int array[100] = {1,2,3,4,5,6,7,8,9,10};
    int i, K, array_size = 10;
    scanf("%d",&K); //index input
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for( i = K-1; i < array_size; i++)
    {
        array[i] = array[i+1];
    }
    array_size--;

    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
