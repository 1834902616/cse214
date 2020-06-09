## [Variable Initialization & Decleration](../lab5/16.c)
```c
int count = 0, temp = 0; //varable initialization [Datatype - int]
int max_2nd, min_2nd, i, j, X, K, index; //variable decleration [Datatype - int]
int array_size = 10; // For array[100] // [Datatype - int]
int array_size1 = 10; // For array1[100] // [Datatype - int]
int array_size2 = 10; // For array2[100]// [Datatype - int]
```

## [Array Decleration or Initialization](../lab5/18.c)
```c
int array[100]; // array decleration
int array1[100]; // array decleration
int array2[100]; // array decleration
int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // array initilization [Data type - int]
int array1[100] = {80, 5, 95, 67, 102, 7, 66, 3, 92, 78}; // array initialization [Data type - int]
int array2[100] =  {11, 12, 13, 14, 15}; // array initialization [Data type - int ]
```

## [Pointer Decleration or Initialization](../lab5/19.c)
```c
int *p, *q, *r;
int *max, *min;
p = array;
q = array1;
r = array2;
```

## [Scan Array Elements Using Pointer (User Input)](../lab5/1.c)
```c
scanf("%d",&N);
for(i = 0; i < N; i++)
        scanf("%d",(p+i));
```

## [Scan values in Array Using Pointer (Until EOF)](../lab5/2.c)
```c
while(scanf("%d",(p+i)) == 1)
{ i++;
  size++;
 }
```

## [Scan values in Array Using Pointer (Until Input = 0)](../lab5/3.c)
```c
while(scanf("%d",(p+i)) == 1)
{
        if(*(p+i) == 0)
            break;
            }
size = i;
```

## [Array Print Using Pointer (Separated by Space)](../lab5/4.c)
```c
for(i = 0; i < array_size; i++)
       { 
       printf("%d ", *(p+i));
       }
```

## [Insert Value Into Array Using Pointer (User Input)](../lab5/5.c)
```c
for (i = array_size; i >= K; i--)
      {
      *(p+i) = *(p+i-1);
      }
array_size++;
*(p+K-1) = X;
```

## [Update Value in Array Using Pointer (User Input)](../lab5/6.c)
```c
for(i = K-1; i < array_size; i++)
    {
        *(p+i) = X;
        break;
    }
```

## [Search Value & determined the Index in Array Using Pointer(User Input)](../lab5/7.c)
```c
for(i = 0; i < array_size; i++)
    {
        if(*(p+i) == X)
        {
            index = i;
            count++;
        }
    }

if(count == 1)
       { printf("%d",index);}
else
       { printf("-1");}
```

## [Delete Value from Array & shift left Elements Using Pointer(User Input)](../lab5/8.c)
```c
for (i = K-1; i < array_size; i++)
       { 
       *(p+i) = *(p+i)+1); 
       }
array_size--;
```
## [Find Maximum in Array Using Pointer](../lab5/9.c)
```c
for(i = 1; i < array_size; i++)
        if(*(max+i) > *max)
            *max = *(max+i);
```

## [Find Minimum in Array Using Pointer](../lab5/10.c)
```c
for(i = 1; i < arrayy_size; i++)
       { if(*(min+i) < *min)
            *min = *(min+i);
            }
```

## [Find Second Maximum in Array Using Pointer](../lab5/11.c)
```c
for(i = 0; i < array_size; i++)
    {
        if(*(max+i) > *max)
        {
            max_2nd = *max;
            *max = *(max+i);
        }
        else if(*(max+i) > max_2nd && *(max+i) < *max)
          {  max_2nd = *(max+i);}
    }
```

## [Find Second Minimum in Array Using Pointer](../lab5/12.c)
```c
for(i = 0; i < array_size; i++)
    {
        if(*(min+i) < *min)
        {
            min_2nd = *min;
            *min = *(min+i);
        }
        else if(*(min+i) < min_2nd && *(min+i) != *min)
           { min_2nd = *(min+i);}
    }
```

## [Summation of Array Using Pointer](../lab5/13.c)
```c
for(i = 0; i < array_size; i++)
        {sum += *(p+i);}
```

## [Copy an Array to Another Array Using Pointer](../lab5/14.c)
```c
for(i = 0; i < array_size; i++)
    {
        count = *(p+i);
        *(q+i) = count;
    }
```

## [Reverse Given Array within the same Array Using Pointer](../lab5/15.c)
```c
for(i = 0; i <= array_size; i++)
    {
        count = *(p + array_size - i);
        *(q+i-1) = count;
    }
```

## [Determine Both Array are Same or Not Using Pointer](../lab5/16.c)
```c
for(i = 0; i < size; i++){
        if(*(p+i) == *(q+i))
           { count++;}
           }

if(count == size)
      {  printf("\nTwo array are same\n");}
else
     {   printf("\nTwo array are not same\n");}
```

## [Merge Two Array Into One Array Using Pointer](../lab5/17.c)
```c
array_size = array_size1 + array_size2;
for(i = array_size1, j = 0; i <= array_size; i++, j++)
     {  *(p+i) = *(q+j);}
```

## [Merge and Sorted two Array Using Pointer](../lab5/18.c)
```c
array_size = array_size1 + array_size2;
for(i = size1, j = 0; i <= size; i++,j++)
    {
        size1++;
        *(p+i) = *(q+j);
    }
    
printf("\n");

for(i = 0; i < array_size; i++)
    {
        for(j = i+1; j < array_size; j++)
        {
            if(*(p+i) > *(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
```

## [Split an Array Using Pointer(User Input)](../lab5/19.c)
```c
for (i = 0; i < K; i++)
    {
        *(q+i) = *(p+i);
    }
    for (i = 0; i < K; i++)
    {
        printf("%d ", *(q+i));
    }
    printf("\n");
    for (i = K; i < a_size; i++)
    {
        *(r+i) = *(p+i);
        printf("%d ", *(r+i));
    }

```

## [Cyclically Permute an Array Using Pointer](../lab5/20.c)
```c
*(p + array_size) = *p;
for (i = 0; i < array_size; i++)
        *(p+i) = *(p+i+1);
```

