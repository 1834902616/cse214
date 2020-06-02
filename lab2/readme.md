## [Variable Decleration](../lab2/1.c)
```c
int i, j;
int X; // Where X is Value
int K; // Where K is Position or Index
int size = 10, tag = 0;
```
## [Array Decleration or Initialization](../lab2/2.c)
```c
int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

## [Print The Array Elements](../lab2/3.c)
```c
/*for ( initialize ; condition; increment ) {
   printf statement(s);
}*/

//Implement in Program
for(i=0; i<size; i++)
        printf("%d ", a[i]);
```

## [Insert Value in Array](../lab2/4.c)
```c
//Insert Value
scanf("%d", &X);

//Insert Position
scanf("%d", &K);

for (i=size; i>=K; i--)
        a[i] = a[i - 1];
        
size++;

a[K - 1] = X;
```

## [Update Index with Another Value ](../lab2/5.c)
```c
    for (i=0; i==K; i++)
        a[i] = a[i - 1];

    a[K - 1] = X;
```

## [Update Index with Another Value in a Correct Position or Index ](../lab2/6.c)
```c
//Insert Position
scanf("%d", &K);

//Insert Value
scanf("%d", &X);

for (i=0; i==K; i++)
      a[i] = a[i - 1];

a[K - 1] = X;
```

## [Search a Value in Array](../lab2/7.c)
```c
//Insert Value
scanf("%d", &X);
    
for (i=0; i<size; i++){
      if(a[i]==X)
      tag++;
    }
```

## [Search a Value in Array and if Found Print -1](../lab2/8.c)
```c
if(tag!=1)
   printf("-1");
```

## [Delete a Value in Array](../lab2/9.c)
```c
//Insert Position
scanf("%d", &K);

for (i=K-1; i<size; i++)
       a[i] = a[i+1];
size--;
```

## [Only Delete the First Occurrence of The Value](../lab2/10.c)
```c
//Insert Value
    scanf("%d",&X);

for(i=0; i<size; i++){
        if(X==array[i]){
            for(j=i; j<=size; j++){
                array[j] = array[j+1];
            }
            tag++;
            break;
        }
    }

size--;

if(tag!=1){
        printf("Not Found");
    }
    else{
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }
```

## [Delete All the Occurrence of The Value](../lab2/11.c)
```c
//Insert Value
scanf("%d",&X);

for( i=0; i<=size; i++){
        if(X==array[i]){
            for(j=i; j<=size; j++){
                array[j] = array[j+1];
            }
            size--;
            tag++;
            i--;
        }
    }
    
if(tag==0){
        printf("Not Found");
    }
    else{
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }
```
