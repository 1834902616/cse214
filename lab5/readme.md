## [Variable Decleration](../lab5/16.c)
```c
int tag = 0;
int same = 0;
int max_2nd, min_2nd;
int i, j, X, K, location;
int size = 10; // For array[100]
int size1 = 10; // For array1[100]
int size2 = 10; // For array2[100]
```

## [Array Decleration or Initialization](../lab5/18.c)
```c
int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int array1[100] = {8, 2, 18, 19, 11, 14, 15, 7, 1, 4};
int array2[100] = {10, 5, 20, 12, 16, 13, 17, 3, 6, 9};
```

## [Pointer Decleration or Initialization](../lab5/19.c)
```c
int *p, *q, *r;
int *max, *min;
p = &array[0];
q = &array1[0];
r = &array2[0];
```

## [Print the Array Using Pointer](../lab5/1.c)
```c
scanf("%d",&N);
for(i=0; i<N; i++)
        scanf("%d",(p+i));
```

## [Print the Array Using Pointer (Untill EOF)](../lab5/2.c)
```c
for(i=0; scanf("%d",(p+i))!=EOF; i++)
        size++;
```

## [Print the Array Using Pointer (Untill Input 0)](../lab5/3.c)
```c
for(i=0; scanf("%d",(p+i))!=EOF; i++)
        if(*(p+i)==0)
            break;
size=i;
```

## [Print the Array Using Pointer (Separated by Space)](../lab5/4.c)
```c
for(i=0; i<size; i++)
        printf("%d ", *(p+i));
```

## [Insert a Value Into the Array Using Pointer](../lab5/5.c)
```c
for (i=size; i>=K; i--)
        *(p+i) = *(p+i-1);
size++;
*(p+K-1) = X;
```

## [Update a Value from the Array Using Pointer](../lab5/6.c)
```c
for(i=K-1; i<size; i++)
    {
        *(p+i)=X;
        break;
    }
```

## [Search a Value from The Array Using Pointer](../lab5/7.c)
```c
for(i=0; i<size; i++)
    {
        if(*(p+i)==X)
        {
            location = i;
            tag++;
        }
    }

if(tag==1)
        printf("%d",location);
else
        printf("-1");
```

## [Delete a Value from the Array Using Pointer](../lab5/8.c)
```c
for (i=K-1; i<size; i++)
        *(p+i) = *(p+i+1);
size--;
```
## [Maximum from the Array Using Pointer](../lab5/9.c)
```c
for(i=1; i<size; i++)
        if(*(max+i)>*max)
            *max = *(max+i);
```

## [Minimum from the Array Using Pointer](../lab5/10.c)
```c
for(i=1; i<size; i++)
        if(*(min+i)<*min)
            *min = *(min+i);
```

## [Second Maximum from the Array Using Pointer](../lab5/11.c)
```c
for(i=0; i<size; i++)
    {
        if(*(max+i)>*max)
        {
            max_2nd = *max;
            *max = *(max+i);
        }
        else if(*(max+i)>max_2nd && *(max+i)<*max)
            max_2nd = *(max+i);
    }
```

## [Second Minimum from the Array Using Pointer](../lab5/12.c)
```c
for(i=0; i<size; i++)
    {
        if(*(min+i)<*min)
        {
            min_2nd = *min;
            *min = *(min+i);
        }
        else if(*(min+i)<min_2nd && *(min+i)!=*min)
            min_2nd = *(min+i);
    }
```

## [Summation of Array Using Pointer](../lab5/13.c)
```c
for(i=0; i<size; i++)
        sum += *(p+i);
```

## [Copy an Array to Another Array Using Pointer](../lab5/14.c)
```c
for(i=0; i<size; i++)
    {
        tag = *(p+i);
        *(q+i) = tag;
    }
```

## [Reverse an Array Using Pointer](../lab5/15.c)
```c
for(i=0; i<=size; i++)
    {
        tag = *(p+size-i);
        *(q+i-1) = tag;
    }
```

## [Both Array are Same or Not Same Using Pointer](../lab5/16.c)
```c
for(i=0; i<size; i++)
        if(*(p+i)==*(q+i))
            same++;

if(same==size)
        printf("\nTwo array are same\n");
else
        printf("\nTwo array are not same\n");
```

## [Merge Two Array Into One Array Using Pointer](../lab5/17.c)
```c
size = size1 + size2;
for(i=size1, j=0; i<=size; i++,j++)
       *(p+i)=*(q+j);
```

## [Merge and Sorted two Array Using Pointer](../lab5/18.c)
```c
size = size1 + size2;
for(i=size1, j=0; i<=size; i++,j++)
    {
        size1++;
        *(p+i)=*(q+j);
    }
    
printf("\n");

for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(*(p+i)>*(p+j))
            {
                tag = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tag;
            }
        }
    }
```

## [Spilt an Array Using Pointer](../lab5/19.c)
```c
*(p+size) = *p;
for (i=0; i<size; i++)
        *(p+i) = *(p+i+1);for(i=0; i<size; i++)
    {
        if(i<K)
        {
            *(q+i) = *(p+i);
            size1++;
        }
        else
        {
            *(r+j++) = *(p+i);
            size2++;
        }
    }
```

## [Cyclically Permute an Array Using Pointer](../lab5/20.c)
```c
*(p+size) = *p;
for (i=0; i<size; i++)
        *(p+i) = *(p+i+1);
```

