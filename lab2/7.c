/*Search a value X(take input X from user)in the array and print "Found" if X found in the array otherwise print "Not Found".*/

#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,5,6,7,8,9,10};
    int X, i, array_size = 10;
    scanf("%d",&X); //value_input
    for( i = 0; i < array_size; i++)
    {
        if (X == array[i])
        {
            X = 1;
        }
    }
    if ( X == 1)
    {
        printf("\nFound\n");
    }
    else
    {
        printf("\nNot Found\n");
    }

    return 0;
}
