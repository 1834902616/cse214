#include<stdio.h>
int main ()
{
    int array[100];
    int i = 0;

    while (scanf("%d",&array[i]) == 1)
    {
        i++;
        if(i+1>100)
        {
            printf("Program Overflow.");
            break;
        }

    }


    return 0;
}
