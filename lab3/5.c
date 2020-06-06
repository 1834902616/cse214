/* Calculate the summation of all elements of the given array */

#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,5,6,7,8,9,10};
    int i, sum = 0, array_size = 10;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }

    for (i = 0; i < array_size; i++)
    {
        sum =sum + array[i];
    }
    printf("\n%d",sum);

    return 0;
}


