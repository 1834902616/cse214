
## Array Decleration
```c
int array[10];
double array[10];
float array[10];
char array[10];
int array[]; // Invalid Decleration
```

## Array Initialization
```c
int array[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
int array[] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

## Array Elements Insertion (User Input)
```c
    for(i  =  0 ; i < array_size ; i++)
    {
        scanf("%d ",&array[i]);
    }
```

## Print The Array Elements
```c
    for(i = 0; i < array_size ; i++)
    {
        printf("%d ", array[i]);
    }
```

## Array Reversing
```c
for(i = array_size-1; i>=0 ; i--)
    {
        printf("%d ", array[i]);
    }
```

## Array Access
```c
if (index_value > index_size)
printf("Overflow"); //The index location is not available when element accessing become out of bound.
```

## End of File
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
