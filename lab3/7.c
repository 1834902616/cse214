/* Calculate Standard Deviation of all elements of the given array */

#include<stdio.h>
#include<math.h>
int main()
{
    int array[100] = {1,2,4,5,8,9,7,6,2,7,4,5};
    int i,array_size = 10;
    double sum = 0, average = 0, standard_devi = 0;

    for(i = 0; i<array_size; i++)
    {
        printf("%d ",array[i]);
    }

    for(i = 0; i < array_size; i++)
    {
        sum += array[i];
    }

    printf("\n%.2lf",sum);

    average = sum/array_size;

    printf("\n%.2lf",average);

    for(i = 0; i < array_size; i++)
    {
        standard_devi += pow(array[i]-average,2);
    }
    printf("\n%.2lf",standard_devi);

    standard_devi = sqrt(standard_devi/array_size);

    printf("\n%.2lf\n",standard_devi);

    return 0;
}
