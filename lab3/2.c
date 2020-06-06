/* Find Minimum from the Array */

#include<stdio.h>
int main ()
{
    int array[100]= {11,20,3,50,6,100,6,9,10,6};
    int i, min, array_size = 10;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }

    min = array[0];

    for (i = 0; i < array_size; i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }

    }
    printf("\n%d",min);
    return 0;
}

