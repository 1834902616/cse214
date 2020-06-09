/* Find Second Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int i, *max, max_2nd;
    int array[100] = {80, 5, 95, 67, 102, 7, 66, 3, 92, 78};
    int array_size = 10;

    max = array;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(max+i));
    }

    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        if((*(max+i)) > *max)
        {
            max_2nd = *max;
            *max = *(max+i);
        }
        else if((*(max+i)) > max_2nd && (*(max+i)) < *max)
            max_2nd = max[i];
    }

    printf("\n%d\n", max_2nd);

    return 0;
}

