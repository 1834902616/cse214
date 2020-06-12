## [Value Insertion in Array at Defined Index](../lab2/1.c)
```c
    int array[100] = {1,2,3,4,5,6,7,8,9,10} ; //array decleration & initialization[Data type - int]
    int array_size = 10; //variable decleration & initialization
    int value = 5; //defined value which will be inserted in array
    for (int i = 0 ; i < array_size ; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    array[9] = value; //
```
## [Value Insertion At the End of Currently Stored Elements](../lab2/2.c)
```c
    scanf("%d",&X); //value input
    for( i = 0; i < array_size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    array[10] = X; //value assign at the end of currently stored elements
    array_size++; //size increased 
  ```
## [Value Insert at Defined Index & Shift Right(User Input)](../lab2/3.c)
```c
    int array[100] = {1,2,3,4,5,6,7,8,9,10}; //array decleration & initialization [data type - int]
    int X, i, array_size = 10; //variable declertion & initiaization [data type -int]
    int position = 3; //defined index
    scanf("%d",&X); //value input
    array_size++;
    for( i = array_size - 1; i >= position - 1; i--)
    {
        array[i+1] = array[i];
    }
    array[position-1] = X;
```
## [Value Insert at Kth Index Shift Right(User input)](../lab2/4.c)
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

## [Update Defined Index with Another Value](../lab2/5.c)
```c
    for (i = 0; i == K; i++){
        array[i] = array[i - 1];
}
    array[K - 1] = X;

/*Or 
Array[4] = X //X is value & array_index is predefined
*/
```

## [Update Index with Another Value in any Position or Index ](../lab2/6.c)
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
