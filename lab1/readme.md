
# Variable & Array Decleration Pattern:
```c
int N ; // variable declaration
int size = 10 ; //variable declaration
int array[10]; //array declaration [ data type - int]
double array[10]; //array declaration [ data type - double]
float array[10];//array declaration [ data type - float]
char array[10];//array declaration [data type - char]
int array[]; // Invalid Decleration
```
## [Scan N Array Elements (User Input)](../lab1/1.c)
```c
    int array[100]; //array declaration [ data type - int]
    int i, N;  // variable declaration [data type - int]
    scanf("%d",&N); //here, N is the number of array elements
    if( N <= 100)
    {
        for (i = 0; i < N; i++)
        {
            scanf("%d",&array[i]); //elements insert in array
        }
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

## [Scan Values in Array (Until Input = 0)](../lab1/3.c)
```c
/*if (index_value > index_size)
printf("Overflow"); //The index location is not available when element accessing become out of bound.
*/

    int i = 0;
    while (scanf("%d",&array[i]) == 1)
    {

        if(array[i] == 0)
        {
            break;
        }
        else if(i>100)
        {
            printf("Program Overflow");
            break;
        }
        i++;
```
## [Print Array Elements(In newline)](../lab1/4.c)
```c
/* To use for loop- 
for(initialization ; condion ;  increment){
statement ;}
*/
    int array[100] = {1,2,3,4,5,6,7,8,9,10}; //array initiliazation & decleration
    int i, size = 10; //variable initialization & decleration
    for( i = 0; i < size ; i++)
    {
        printf ("%d\n",array[i]);
    }
```
## [Print Array Elements(Separated by Space)](../lab1/5.c)
```c
/* To use for loop- 
for(initialization ; condion ;  increment){
statement ;}
*/
    int array[100]= {1,2,3,4,5,6,7,8,9,10}; //array initialization & decleration
    int i, size = 10; //variable initialization & decleration
    for( i = 0; i < size ; i++)
    {
        printf ("%d ",array[i]);
    }
```
## [Print Array Elements(Separated by Comma)](../lab1/6.c)
```c
/* To use for loop- 
for(initialization ; condion ;  increment){
statement ;}
*/

     int array[100]= {1,2,3,4,5,6,7,8,9,10}; //array decleration & initialization
    int i, size = 10; //variable initialization & decleration
    for( i = 0; i<size ; i++)
    {
        printf("%d",array[i]);

        if( i <= size - 2)
        {
            printf(",");
        }
    }
```
## [Print Array in Reverse Order(Separated by Space)](../lab1/7.c)
```c
/* Reverse loop -
for (initialization = array_size - 1 ; condition ; decrement){
statement;}
*/ 
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j, size = 10;

for(i = array_size - 1; i >= 0 ; i--)
    {
        printf("%d ", array[i]);
    }
```
