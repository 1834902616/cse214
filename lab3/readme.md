
## [Find Maximum](../lab3/1.c)
```c
max = array[0]; //let's assume one of index[here,array[0] as max
for(i = 0; i < array_size; i++)
    {
        if(array[i] > max)
            max = array[i];
    }
```

## [Find Minimum](../lab3/2.c)
```c
min = array[0]; //let's assume one of index[here,array[0] as min
for(i = 0; i < size; i++)
    {
        if(array[i] < min)
            min = array[i];
    }
```

## [Find Second Maximum](../lab3/3.c)
```c
max = array[0]; //let's assume one of index[here,array[0] as max
for(i = 0; i < array_size; i++)
    {
        if(array[i] > max)
        {
            max2 = max;
            max = array[i];
        }
        else if(array[i] > max2 && array[i] < max) // here, checking max2 is second maximum
            max2 = array[i];
    }
```

## [Find Second Minimum](../lab3/4.c)
```c
min = array[0]; //let's assume one of index[here,array[0] as min
for(i = 0; i < array_size; i++)
    {
        if(array[i] < min)
        {
            min2 = min;
            min = array[i];
        }
        else if(array[i] < min2 && array[i] > min) //here, checking min2 is second minimum
        {
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
    average = sum/array_size;
```

## [Calculate Standard Deviation](../lab3/7.c)
```c
for(i = 0; i < array_size; i++)
        standard_devi += pow(array[i]-average,2);

standard_devi = sqrt(standard_devi/array_size);
```

## [Calculate First 92 Fibonacci Numbers](../lab3/8.c)
```c
array[0] = 0; //lets take the series starts with value 0
array[1] = 1; //lets take the series 2nd value is 1

for(i = 2; i < array_size; i++)
        array[i] = array[i-1] + array[i-2]; //every first two numbers summation is equal to 3rd number 
```
