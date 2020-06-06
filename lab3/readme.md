## [Variable Decleration](../lab3/7.c)
```c
int i, max, min, max2, min2;
double sum = 0, average = 0, standard_devi = 0;
int size = 10;
```
## [Array Decleration or Initialization](../lab3/1.c)
```c
int array[100] = {73, 80, 8, 40, 33, 57, 70, 92, 99, 85};
```

## [Find Maximum](../lab3/1.c)
```c
max = array[0];
for(i = 0; i < array_size; i++)
    {
        if(array[i] > max)
            max = array[i];
    }
```

## [Find Minimum](../lab3/2.c)
```c
min = array[0];
for(i = 0; i < size; i++)
    {
        if(array[i] < min)
            min = array[i];
    }
```

## [Find Second Maximum](../lab3/3.c)
```c
max = array[0];
for(i = 0; i < array_size; i++)
    {
        if(array[i] > max)
        {
            max2 = max;
            max = array[i];
        }
        else if(array[i] > max2 && array[i] < max)
            max2 = array[i];
    }
```

## [Find Second Minimum](../lab3/4.c)
```c
min = array[0];
for(i = 0; i < array_size; i++)
    {
        if(array[i] < min)
        {
            min2 = min;
            min = array[i];
        }
        else if(array[i] < min2 && array[i] != min)
            min2 = array[i];
    }
```

## [Summation of Given Array](../lab3/5.c)
```c
for(i = 0; i < array_size; i++)
        sum += array[i];
```

## [Average of Given Array](../lab3/6.c)
```c
for(i = 0; i < array_size; i++)
        sum += array[i];
    average = sum/size;
```

## [Calculate Standard Deviation](../lab3/7.c)
```c
for(i = 0; i < array_size; i++)
        standard_devi += pow(array[i]-average,2);

standard_devi = sqrt(standard_devi/array_size);
```

## [First 92 Fibonacci Numbers](../lab3/8.c)
```c
array[0] = 0;
array[1] = 1;

for(i = 2; i < array_size; i++)
        array[i] = array[i-1] + array[i-2];
```
