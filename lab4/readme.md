## [Array Decleration & Initialization](../lab4/4.c)
```c
int array[10] = {10,20,30,40,50,60,70,80,90,100}; //array initialization [Datatype - int]
int a[30], arr[100]; // array decleration [Datatype - int]

```
## [Variable Decleration & initialization](../lab4/3.c)
```c
int i, j, K; // variable declaration [Datatype - int]
int count = 0, temp = 0; // variable declaration with intialization [Datatype - int]
int array_size = 10; //variable declaration with intialization [Datatype - int]
```

## [Copy the Given Array](../lab4/1.c)
```c 
 arr[100]; //another array where copying array will be stored
 for(i = 0; i < array_size; i++)
    {
        arr[i] = array[i]; //copying 1st array into another array
    }
```

## [Reverse Array & Store it in Another Array](../lab4/2.c)
```c
arr[100] ; //here, reversed array will be stored
for(i = 0, j = array_size - 1; i <= array_size; i++, j--)
    {
        arr[i] = array[j]; //copying array in reverse order
    }
```

## [Reverse Array within the Same Array](../lab4/3.c)
```c
    temp = 0; //here, temp is the variable to hold the value of array
    for(i = 0, j = array_size - 1; i < array_size/2; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
```

## [Comparison Between Two Array](../lab4/4.c)
```c
for(i = 0; i < array_size; i++)
    {
        if(array[i] == arr[i]) //identifying equality between both array
        {
            count++; //If array elements are equal then count 10(how many times the loop is cycling)
        }
    }
    if(count == array_size)
    {
        printf("\nBoth arrays are same\n"); //if equal then print same
    }
    else
    {
        printf("\nBoth arrays aren't same\n"); // if not equal then print
    }

```

## [Merge Two Declared Array into One Array](../lab4/5.c)
```c
a[30]; //Declared 3rd array where merged array will be stored
size_a = size_array + size_arr; //the merged array size will be equal of two declared array size
for(i = 0; i < size_array; i++)
    {
        a[i] = array[i]; //copying first array in 3rd array
    }
    for(i = 0, j = size_array; i < size_arr; i++,j++)
    {
        a[j] = arr[i]; //copying second array in 3rd array
    }
```

## [Merge the Elements of Two Sorted Array](../lab4/6.c)
```c
for(i = 0; i < size_a; i++)
    {
        array[i] = a[i];  //copying 1st sorted array in 3rd array
    }
    for(i = 0, j = size_a; i < size_array; i++,j++)
    {
        array[j] = arr[i]; //copying 2nd sorted array in last of 3rd 
    }
     for(i = 0; i < size_array; i++)
    {
        for(j = i + 1; j < size_array; j++)
        {
            if(array[i] > array[j]) //Sorting the array after merging
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
```

## [Split Array at Specified Position into Two Array](../lab4/7.c)
```c 
    scanf("%d",&K); //here, K is the position of the element to split the array
    for (i = 0; i < K; i++) 
    {
        arr[i] = a[i]; //copying array elements of before specified position in One array
    }
    for (i = 0; i < K; i++)
    {
        printf("%d ", arr[i]); //print the first split part array
    }
    printf("\n");
    for (i = K; i < a_size; i++) 
    {   
        arr2[i] = a[i]; //copying array elements of after specified position in Another Array
        printf("%d ", arr2[i]); //print the 2nd part of array 
    }
```

## [Cyclically Permute the Elements of Array](../lab4/8.c)
```c
    array[array_size] = array[0]; //1st array element is the last array element
    for (i = 0; i < array_size; i++)
    {
        array[i] = array[i+1]; //shift left the array elements
    }
```

