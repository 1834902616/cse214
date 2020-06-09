/* Find Maximum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int array[100] = {80, 5, 95, 67, 102, 7, 66, 3, 92, 78};
    int array_size = 10;
    int i, *max;

    max = array;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(max+i));
    }
    printf("\n");

    for(i = 0; i < array_size; i++)
        if(*(max+i) > *max)
        {
            *max = *(max+i);
        }
    printf("\n%d\n",*max);

    return 0;
}
