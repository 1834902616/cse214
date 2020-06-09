/* Scan values from user into an array until end of file.
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int array[100];
    int i = 0, array_size = 0, N;
    int *p;

    p = array;

    while(scanf("%d",p+i) == 1)
    {
        i++;
    }
    array_size = i;
    for(i = 0; i < array_size; i++)
    {
        printf("\n%d ",*(p+i));
    }
    return 0;
}

