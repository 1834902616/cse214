## [Variable Decleration & initialization](../lab2/1.c)
```c
int i, j; // variable decleration [Datatype-int]
int X; // variable declaration [Datatype-int]
int K; // variable declaration [Datatype-int]
int value; //variable declaration [Datatype-int]
int array_size = 10, count = 0; //variable initialization [Datatype-int]
```
## [Array Decleration or Initialization](../lab2/2.c)
```c
int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
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

## [Value Insertion in Array](../lab2/4.c)
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

## [Update Index with Another Value in a Define Position or Index ](../lab2/6.c)
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
    
for (i = 0; i < array_size; i++){
      if(array[i] == X)
      count++;
    }
```

## [Value Search in Array and Not Found logic](../lab2/8.c)
```c
if(X != 1) //Here X is the value
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

## [Deletion of First Occurrence of The Value](../lab2/10.c)
```c
//Insert Value
    scanf("%d",&X);

for(j = 0; j < array_size; j++){
        if(X == array[j]){
            for(i = j; i <= array_size; i++){
                array[i] = array[i+1];
            }
            count++;
            break;
        }
array_size--;
      
```

## [Deleteion for All the Occurrence of The Value](../lab2/11.c)
```c
//Insert Value
scanf("%d",&X);

for( j = 0; j <= array_size; j++){
        if(X == array[i]){
            for(i = j; i <= array_size; i++){
                arrayi] = array[i+1];
            }
            array_size--;
            count++;
            j--;
        }
   
```
