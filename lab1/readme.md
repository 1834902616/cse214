```c
## Array Decleration
int array[10];
int array[]; // Invalid Decleration
double array[10];
float array[10];
char array[10];
```

```c
## Array Initialization
int array[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
int array[] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

```c
## Array Elements Insertion (User Input)
    for(i  =  0 ; i < array_size ; i++)
    {
        scanf("%d ",&array[i]);
    }
```

```c
## Print The Array Elements
    for(i = 0; i < array_size ; i++)
    {
        printf("%d ", array[i]);
    }
```
```c
## Array Reversing
for(i = array_size-1; i>=0 ; i--)
    {
        printf("%d ", array[i]);
    }
```

```c
## Array Access
if (index_value > index_size)
printf("Overflow"); //The index location is not available. 
```

```c
## End of File
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
