/*Search a value X(take input X from user)in the array and print the
 index if X found in the array otherwise print "-1".*/

#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,5,6,7,8,9,10};
    int X, i, array_size = 10, index;
    scanf("%d",&X); //value input
    for( i = 0; i < array_size; i++)
    {
        if (X == array[i])
        {
            X = 1;
            index = i;
        }
    }
    if ( X == 1)
    {
        printf("%d",index);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
