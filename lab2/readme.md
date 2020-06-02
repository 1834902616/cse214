
## [Variable Decleration](../lab2/1.c)
```c
int i, j;
int X; // Where X is Value
int K; // Where K is Position or Index
int size = 10, tag = 0;
```
## [Array Decleration or Initialization](../lab2/2.c)
```c
int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

## [Print The Array Elements](../lab2/3.c)
```c
/*for ( initialize ; condition; increment ) {
   printf statement(s);
}*/

//Implement in Program

for(i=0; i<size; i++)
        printf("%d ", a[i]);
```

## [Insert Value in Array](../lab2/4.c)
```c
//Insert Value
scanf("%d", &X);

//Insert Position
scanf("%d", &K);

for (i=size; i>=K; i--)
        a[i] = a[i - 1];
        
size++;

a[K - 1] = X;
```

## [Update Index with Another Value ](../lab2/5.c)
