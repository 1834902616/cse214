/**
Name: Shamima Akther
ID: 1834902616
**/

/* Search a value “X” (take input X from user) in the array
   and print the location if “X” found in the array otherwise
   print -1. Access the array using pointer */

#include<stdio.h>
int main ()
{
    int array[100] = {10,20,30,40,50,60,70,80,90,10};
    int X, i,location;
    int array_size = 10;
    int *p;
    p = array;
    printf("Array Elements are : ");
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\nEnter Value: ");
    scanf("%d",&X);

    for( i = 0; i < array_size; i++)
    {
        if (X == *(p+i))
        {
            X = 1;
            location = i;
        }
    }
    if ( X == 1)
    {
        printf("\nIndex = %d, Location = %d\n",location,&location);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
