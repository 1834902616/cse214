## [Array Decleration & Initialization](../lab3/1.c)
```c
int array[100] = {1,2,3,4,50,6,100,8,9,10}; //[Datatype - int]
```
## [Variable Decleration & initialization](../lab3/7.c)
```c
int i, max, min, max2, min2; // variable declaration [Datatype - int]
double sum = 0, average = 0, standard_devi = 0; // variable declaration with intialization [Datatype - double]
int size = 10; //variable declaration with intialization [Datatype - int]
```

## [Copy the given Array](../lab4/1.c)
```c
 for(i = 0; i < array_size; i++)
    {
        arr[i] = array[i];
    }
```

## [Reverse Array & Store it in another Array](../lab4/2.c)
```c
for(i = 0, j = array_size - 1; i <= array_size; i++, j--)
    {
        arr[i] = array[j];
    }
```

## [Reverse Array within the Same Array](../lab4/3.c)
```c
    for(i = 0, j = array_size - 1; i < array_size/2; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
```

## [Compare Two Array](../lab4/4.c)
```c
for(i = 0; i < array_size; i++)
    {
        if(array[i] == arr[i])
        {
            count++;
        }
    }
    if(count == array_size)
    {
        printf("\nBoth arrays are same\n");
    }
    else
    {
        printf("\nBoth arrays aren't same\n");
    }

```

## [Merge Two Declared Array into One Array](../lab4/5.c)
```c
 for(i = 0; i < size_array; i++)
    {
        a[i] = array[i];
    }
    for(i = 0, j = size_array; i < size_arr; i++,j++)
    {
        a[j] = arr[i];
    }
```

## [Merge the Elements of Two Sorted Array](../lab4/6.c)
```c
for(i = 0; i < size_array; i++)
    {
        a[i] = array[i];
    }
    for(i = 0, j = size_array; i < size_arr; i++,j++)
    {
        a[j] = arr[i];
    }
```

## [Split Array at Specified Position into two Array](../lab4/7.c)
```c
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
```

## [Cyclically Permute the Elements of Array](../lab4/8.c)
```c
array[array_size] = array[0];
    for (i = 0; i < array_size; i++)
    {
        array[i] = array[i+1];
    }
```

