/* Find Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int i, *min;
    int array[100] = {80, 5, 95, 67, 102, 7, 66, 3, 92, 78};
    int array_size = 10;

    min = array;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(min+i));
    }

    printf("\n");

    for(i = 1; i < array_size; i++)
    {
        if(*(min+i) < *min)
        {
            *min = *(min+i);
        }
    }
    printf("\n%d\n",*min);

    return 0;
}
