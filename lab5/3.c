/* Scan values from user into an array until user input is 0 (Zero).
    Access the array using pointer */

#include<stdio.h>
int main()
{
    int array[100];
    int i = 0, array_size = 0;
    int *p;

    p = array;

    while(scanf("%d",(p+i))!= EOF)
    {
        if(*(p+i) == 0)
        {
            break;
        }
        i++;
    }
    array_size = i;

    printf("\n");

    for(i = 0; i < array_size; i++)
       {
           printf("%d ",*(p+i));
       }

    return 0;
}
