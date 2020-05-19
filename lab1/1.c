#include<stdio.h>
int main ()
{
    int array[100];
    int i, N;
    scanf("%d",&N);
    if( N <= 100)
    {

        for (i = 0; i < N; i++)
        {
            scanf("%d",&array[i]);
        }

    }
    else
    {
        printf("Program Overflow.");
    }

    return 0;
}
