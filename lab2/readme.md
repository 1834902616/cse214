## [Variable Decleration](../lab2/1.c)
```c
int i, j;
int X; // Where X is Value
int K; // Where K is Position or Index
int value; array_size = 10, count = 0;
```
## [Array Decleration or Initialization](../lab2/2.c)
```c
int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

## [Print The Array Elements](../lab2/3.c)
```c
/*for ( initialization ; condition; increment/decrement ) {
   printf(statement);
}*/

//Implement in Program
for(i = 0; i < array_size; i++)
        printf("%d ", array[i]);
```

## [Insert Value in Array](../lab2/4.c)
```c
//Insert Value
scanf("%d", &X);

//Insert Position
scanf("%d", &K);

for (i = array_size; i >= K; i--)
        array[i] = array[i - 1];
        
array_size++;

array[K - 1] = X;
```

## [Update Index with Another Value ](../lab2/5.c)
```c
    for (i = 0; i == K; i++)
        array[i] = array[i - 1];

    array[K - 1] = X;
```

## [Update Index with Another Value in a Correct Position or Index ](../lab2/6.c)
```c
//Insert Position
scanf("%d", &K);

//Insert Value
scanf("%d", &X);

for (i = 0; i == K; i++)
      array[i] = array[i - 1];

array[K - 1] = X;
```

## [Search a Value in Array](../lab2/7.c)
```c
//Insert Value
scanf("%d", &X);
    
for (i = 0; i < size; i++){
      if(array[i] == X)
      count++;
    }
```

## [Search a Value in Array and if Found Print -1](../lab2/8.c)
```c
if(count != 1)
   printf("-1");
```

## [Delete a Value in Array](../lab2/9.c)
```c
//Insert Position
scanf("%d", &K);

for (i = K-1; i < array_size; i++)
       array[i] = array[i+1];
array_size--;
```

## [Only Delete the First Occurrence of The Value](../lab2/10.c)
```c
//Insert Value
    scanf("%d",&X);

for(i = 0; i < size; i++){
        if(X == array[i]){
            for(j = i; j <= size; j++){
                array[j] = array[j+1];
            }
            count++;
            break;
        }
    }

array_size--;

if(count != 1){
        printf("Not Found");
    }
    else{
        for(i = 0; i < array_size; i++)
            printf("%d ",array[i]);
    }
```

## [Delete All the Occurrence of The Value](../lab2/11.c)
```c
//Insert Value
scanf("%d",&X);

for( i = 0; i <= array_size; i++){
        if(X == array[i]){
            for(j = i; j <= array_size; j++){
                array[j] = array[j+1];
            }
            array_size--;
            count++;
            i--;
        }
    }
    
if(count == 0){
        printf("Not Found");
    }
    else{
        for(i = 0; i < array_size; i++)
            printf("%d ",array[i]);
    }
```
