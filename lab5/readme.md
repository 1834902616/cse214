### Pointer Decleration or Initialization Basic Pattern:
```c
int *p, *q, *r; //pointer decleration [Data type - int]
int *max, *min; //pointer decleration [Data type - int]

p = array; //pointer initialization
q = array1; //pointer initialization
r = array2; //pointer initialization

//other method of pointer declare & initialization:
p = &array;
p = &array[0];
```

## [Scan Array Elements Using Pointer (User Input)](../lab5/1.c)
```c
scanf("%d",&N); //here, N  iis the number of elements in array.
for(i = 0; i < N; i++)
        scanf("%d",(p+i)); //user input
```

## [Scan values in Array Using Pointer (Until EOF)](../lab5/2.c)
```c
i = 0;
while(scanf("%d",(p+i)) == 1) //scan values until EOF that means until ^Z(ctrl+Z) can be pressed
{ i++;
  size++;
 }
/* or...
 while(scanf("%d",(p+i)) != EOF){
 i++;
 } */
```

## [Scan values in Array Using Pointer (Until Input = 0)](../lab5/3.c)
```c
while(scanf("%d",(p+i)) == 1)
{
        if(*(p+i) == 0)
            break;
            }
size = i; //array size wil be equal to the number of the cycle of loop.
```

## [Array Print Using Pointer (Separated by Space)](../lab5/4.c)
```c
for(i = 0; i < array_size; i++)
       { 
       printf("%d ", *(p+i));  //insert space after the %d to print thee array elements sepaarated by space
       }
```

## [Insert Value Into Array Using Pointer (User Input)](../lab5/5.c)
```c
for (i = array_size; i >= K; i--)  // here, K is the given index
      {
      *(p+i) = *(p+i-1);
      }
array_size++;
*(p+K-1) = X; //here X is thee given value
```

## [Update Value in Array Using Pointer (User Input)](../lab5/6.c)
```c
for(i = K-1; i < array_size; i++)
    {
        *(p+i) = X; //here , X is the given value
        break;
    }
```

## [Search Value & determined the Index in Array Using Pointer(User Input)](../lab5/7.c)
```c
for(i = 0; i < array_size; i++)
    {
        if(*(p+i) == X) //here, X is the given value
        {
            index = i; //if any array elements matching with the given value then that index where the value is, wil be stored.
            count++; //how many times the loop wil be cycled
        }
    }

if(count == 1)
       { printf("%d",index);}
else
       { printf("-1");}
```

## [Delete Value from Array & shift left Elements Using Pointer(User Input)](../lab5/8.c)
```c
for (i = K-1; i < array_size; i++) //here, K is the ddetermined position which value will be stored
       { 
       *(p+i) = *(p+i)+1); //shift left
       }
array_size--;
```
## [Find Maximum in Array Using Pointer](../lab5/9.c)
```c
for(i = 1; i < array_size; i++)
        if(*(max+i) > *max)
            *max = *(max+i); //the max value will be stored in max pointer
```

## [Find Minimum in Array Using Pointer](../lab5/10.c)
```c
for(i = 1; i < arrayy_size; i++)
       { if(*(min+i) < *min)
            *min = *(min+i); //the min value will be stored in min pointer
            }
```

## [Find Second Maximum in Array Using Pointer](../lab5/11.c)
```c
for(i = 0; i < array_size; i++)
    {
        if(*(max+i) > *max)
        {
            max_2nd = *max;
            *max = *(max+i); // max value searching
        }
        else if(*(max+i) > max_2nd && *(max+i) < *max) //if the number is max than all values and less than the most max value
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
            *min = *(min+i); //  searching for most min value
        }
        else if(*(min+i) < min_2nd && *(min+i) != *min) //if the number is min than all values and max than the most min value
           { min_2nd = *(min+i);}
    }
```

## [Summation of Array Using Pointer](../lab5/13.c)
```c
for(i = 0; i < array_size; i++)
        {sum += *(p+i);} //sum the all value
```

## [Copy an Array to Another Array Using Pointer](../lab5/14.c)
```c
for(i = 0; i < array_size; i++)
    {
        count = *(p+i); //hold the value in count
        *(q+i) = count;  //assiggn the value in another array from count
    }
```

## [Reverse Given Array within the same Array Using Pointer](../lab5/15.c)
```c
for(i = 0; i <= array_size; i++)
    {
        count = *(p + array_size - i); //reverse the array
        *(q+i-1) = count;
    }
```

## [Determine Both Array are Same or Not Using Pointer](../lab5/16.c)
```c
for(i = 0; i < size; i++){
        if(*(p+i) == *(q+i)) //if both array elements are equal or not
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
for(i = array_size1, j = 0; i <= array_size; i++, j++) //merging two array
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
                temp = *(p+i);   //sorted the array
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
```

## [Split an Array Using Pointer(User Input)](../lab5/19.c)
```c
for (i = 0; i < K; i++) // here k  is position where the array will be splited
    {
        *(q+i) = *(p+i); //dividing first part of array
    }
    for (i = 0; i < K; i++)
    {
        printf("%d ", *(q+i));
    }
    printf("\n");
    for (i = K; i < a_size; i++)
    {
        *(r+i) = *(p+i); //dividing array
        printf("%d ", *(r+i));
    }

```

## [Cyclically Permute an Array Using Pointer](../lab5/20.c)
```c
*(p + array_size) = *p;
for (i = 0; i < array_size; i++)
        *(p+i) = *(p+i+1); //cyclically permute
```

