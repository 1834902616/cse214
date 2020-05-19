#include<stdio.h>
int main ()
{
 int array[100]={1,2,3,4,5,6,7,8,9,10};
  int i , size = 10;
  for( i = 0; i<10 ; i++)
  {
      printf("%d",array[i]);

 if( i <= size - 2)
  {
      printf(",");
  }

  }
 return 0;
}


