
## [Variable & Array Decleration](../lab1/6.c)
```c
int N ; // variable declaration
int size = 10 ; //variable declaration
int array[10]; //array declaration [ data type - int]
double array[10]; //array declaration [ data type - double]
float array[10];//array declaration [ data type - float]
char array[10];//array declaration [data type - char]
int array[]; // Invalid Decleration
```

## [Array Initialization](../lab1/4.c)
```c
int array[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
int array[] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
```

## [Array N Elements Insertion (User Input)](../lab1/1.c)
```c
    for(i  =  0 ; i < array_size ; i++)
    {
        scanf("%d ",&array[i]);
    }
```
## [Scan Values in Array(Until End of File)](../lab1/2.c)
```c
/*To use while loop -
while(condition) {
   statement(s);
} */

while(scanf("%d",&array[i]) != EOF)
    {
        i++;
    }
    // or
while(scanf("%d",&array[i]) == 1)
    {
        i++;
    }
```
## [Scan Value in Array (Until Input = 0](../lab1/3.c)
```c
if (index_value > index_size)
printf("Overflow"); //The index location is not available when element accessing become out of bound.
```
## [Print Array Elements(In newline)](../lab1/4.c)
```c
/* To use for loop- 
for(initialization ; condion ;  increment){
statement ;}*/

    for(i = 0; i < array_size ; i++)
    {
        printf("%d ", array[i]);
    }
```
## [Print Array Elements(Separated by Space)](../lab1/5.c)
```c
/* To use for loop- 
for(initialization ; condion ;  increment){
statement ;}*/

    for(i = 0; i < array_size ; i++)
    {
        printf("%d ", array[i]);
    }
```
## [Print Array Elements(Separated by Comma)](../lab1/6.c)
```c
/* To use for loop- 
for(initialization ; condion ;  increment){
statement ;}*/

    for(i = 0; i < array_size ; i++)
    {
        printf("%d ", array[i]);
    }
```

## [Print Array in Reverse Order(Separated by Space)](../lab1/7.c)
```c
/* Reverse loop -
for (initialization = array_size - 1 ; condition ; decrement){
statement;}
*/ 

for(i = array_size-1; i>=0 ; i--)
    {
        printf("%d ", array[i]);
    }
```



