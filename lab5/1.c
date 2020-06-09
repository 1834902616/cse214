/*Scan N (take input N from user) values from user into an array.
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int array[100];
    int i, N;
    int *p;

    p = array;

    scanf("%d",&N);

    for(i = 0; i < N; i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n");

    for(i = 0; i < N; i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
