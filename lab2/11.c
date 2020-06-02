/*Delete a value “X” (take input X from user) from the array shift all other value to left.
If “X” is not present in the given array print Element Not Found.Delete all the
occurrence of the value. And print the whole array */

#include<stdio.h>
int main ()
{
    int array[100] = {4,2,3,4,4,4,6,4,8,4};
    int i, j, X, count = 0, array_size = 10;
    scanf("%d",&X); //value input
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }

    printf("\n");

    for( j = 0; j <= array_size; j++)
    {
        if(X == array[j])
        {
            for( i = j; i <= array_size; i++)
            {
                array[i] = array[i+1];
            }
            array_size--;
            count++;
            j--;
        }
    }
    if(count == 0)
    {
        printf("\nElement Not Found\n");
    }
    else
    {
        for( i = 0; i < array_size; i++)
            printf("%d ",array[i]);
    }
    return 0;
}
