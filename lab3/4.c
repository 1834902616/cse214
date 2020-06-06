/* Find Second Minimum from the Array */

#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,50,6,100,8,9,10};
    int i, min2, min, array_size = 10;
    for(i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }

    min = array[0];

    for (i = 0; i < array_size; i++)
    {
        if(min > array[i])
        {
            min2 = min;
            min = array[i];
        }
        else if(min2 > array[i] && min < array[i])
        {
            min2 = array[i];
        }
    }
    printf("\n%d",min2);

    return 0;
}
