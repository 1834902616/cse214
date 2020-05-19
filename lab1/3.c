#include<stdio.h>
int main ()
{
    int array[3];
    int i = 0;
    while (scanf("%d",&array[i]) == 1)
    {

        if(array[i] == 0)
        {
            break;
        }

        else if(i>3)
        {

            printf("Program Overflow");
            break;
        }
        i++;
    }

    return 0;
}

