/* Update Kth (take input K from user) index with the value
    “X” (take input X from user). And print the whole array */

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, K, X;
    int array_size = 10;

    for(i = 0; i < array_size; i++)
        printf("%d ", array[i]);

    printf("\n");
    scanf("%d", &K); //index input

    scanf("%d", &X); //value input

    for (i = 0; i == K; i++)
        array[i] = array[i - 1];

    array[K - 1] = X;

    for(i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;

}
