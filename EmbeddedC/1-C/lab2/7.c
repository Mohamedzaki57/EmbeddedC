#include<stdio.h>

int leap(int x )
{
    if (x % 4 ==0)
        printf("%i is leap year \n", x);
    else
        printf("%i is not leap year \n", x);
    

    
    return 0;
}

int main(){

    // C program for leap years

    int year;
    printf("year  : ");
    scanf("%i" , &year);
  

    leap(year);
    
 

    return 0;
}