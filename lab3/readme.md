## [Variable Decleration](../lab3/7.c)
```c
int i, max, max, max_2nd, min_2nd;
double sum = 0, avg = 0, variance = 0;
int size = 10,  = 0;
```
## [Array Decleration or Initialization](../lab3/1.c)
```c
int array[100] = {73, 80, 8, 40, 33, 57, 70, 92, 99, 85};
```

## [Find Maximum](../lab3/1.c)
```c
max = array[0];
for(i=0; i<size; i++)
    {
        if(array[i]>max)
            max = array[i];
    }
```

## [Find Minimum](../lab3/2.c)
```c
min = array[0];
for(i=0; i<size; i++)
    {
        if(array[i]<min)
            min = array[i];
    }
```

## [Find Second Maximum](../lab3/3.c)
```c
max = array[0];
for(i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max_2nd = max;
            max = array[i];
        }
        else if(array[i]>max_2nd && array[i]<max)
            max_2nd = array[i];
    }
```

## [Find Second Minimum](../lab3/4.c)
```c
min = min_2nd = array[0];
for(i=0; i<size; i++)
    {
        if(array[i]<min)
        {
            min_2nd = min;
            min = array[i];
        }
        else if(array[i]<min_2nd && array[i]!=min)
            min_2nd = array[i];
    }
```

## [Summation of Given Array](../lab3/5.c)
```c
for(i=0; i<size; i++)
        sum += array[i];
```

## [Average of Given Array](../lab3/6.c)
```c
for(i=0; i<size; i++)
        sum += array[i];
    avg = sum/size;
```

## [Calculate Standard Deviation](../lab3/7.c)
```c
for(i=0; i<size; i++)
        variance += pow(array[i]-avg,2);

variance = sqrt(variance/10);
```

## [First 92 Fibonacci Numbers](../lab3/8.c)
```c
array[0] = 0;
array[1] = 1;

for(i=2; i<size; i++)
        array[i] = array[i-1] + array[i-2];
```
