#include<stdio.h>
#include <stdlib.h>

int randn(int  x)
{
    int y =rand()%100;

   
        
      if (x==y)
        printf("Correct");
      else
        printf("false answer , the random number is : %i",y);
    
    return 0;
}

int main(){

    // C program for alphabet

    int x;
    printf("enter the number between 1 to 100 : ");
    scanf("%i" , &x);
  

    randn(x);
    
 

    return 0;
}