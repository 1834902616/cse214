/* Find Second Minimum from the Array. Access the array using pointer */

#include<stdio.h>
int main()
{
    int array[100] = {80, 5, 95, 67, 102, 7, 66, 3, 92, 78};
    int array_size = 10;
    int i, *min, min_2nd;

    min = array;
    for(i = 0; i < array_size; i++)
    {
        printf("%d ",*(min+i));
    }

    printf("\n");

    for(i = 0; i < array_size; i++)
    {
        if(*(min+i) < *min)
        {
            min_2nd = *min;
            *min = *(min+i);
        }
        else if((*(min+i)) < min_2nd && (*(min+i)) != *min)
        {
            min_2nd = *(min+i);
        }
    }

    printf("\n%d\n", min_2nd);

    return 0;
}


