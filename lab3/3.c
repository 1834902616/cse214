/* Find Second Maximum from the Array */

#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,50,6,100,8,9,10};
    int i, j, max, max2, array_size = 10;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }

    max = array[0];

    for (i = 0; i < array_size; i++)
    {
        if(max < array[i])
        {
            max2 = max;
            max = array[i];
        }
        else if(max2 < array[i] && max > array[i])
        {
            max2 = array[i];
        }
    }
    printf("\n%d",max2);

    return 0;
}


