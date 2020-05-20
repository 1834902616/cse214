
## [Array Decleration](../lab1/6.c)
```c
int array[10];
double array[10];
float array[10];
char array[10];
int array[]; // Invalid Decleration
```

## [Array Initialization](../lab1/4.c)
```c
int array[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
int array[] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

## [Array Elements Insertion (User Input)](../lab1/1.c)
```c
    for(i  =  0 ; i < array_size ; i++)
    {
        scanf("%d ",&array[i]);
    }
```

## [Print The Array Elements](../lab1/5.c)
```c
/* To use for loop- 
for(initialization ; condion ;  increment){
statement ;}*/

    for(i = 0; i < array_size ; i++)
    {
        printf("%d ", array[i]);
    }
```

## [Array Reversing](../lab1/7.c)
```c
for(i = array_size-1; i>=0 ; i--)
    {
        printf("%d ", array[i]);
    }
```

## [Array Access](../lab1/3.c)
```c
if (index_value > index_size)
printf("Overflow"); //The index location is not available when element accessing become out of bound.
```

## [End of File](../lab1/2.c)
```c
while(scanf("%d",&array[i]) != EOF)
    {
        i++;
    }
    // or
while(scanf("%d",&array[i]) == 1)
    {
        i++;
    }
```
