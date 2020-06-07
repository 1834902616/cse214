/*Split the Array at Kth(take input K from user)index into two different arrays*/

#include <stdio.h>
int main ()
{
    int a[30]= {1,2,3,4,5,6,7,8,9,10};
    int arr[30];
    int i, a_size = 10, K;

    for (i = 0; i < a_size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    scanf("%d", &K); //the position of the element to split the array
    for (i = 0; i < K; i++)
    {
        arr[i] = a[i];
    }
    for (i = 0; i < K; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = K; i < a_size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
