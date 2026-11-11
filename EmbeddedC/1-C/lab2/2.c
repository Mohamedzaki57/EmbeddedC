#include<stdio.h>

int fact(int n)
{
    if ( n==0 || n==1)
        return 1;
    else
        return n * fact(n-1);
}

int main(){

    // C program to print the odd even numbers for a given range

    int n;
    printf("factorial for  : ");
    scanf("%i" , &n);

    printf ("%i  ",fact(n));
 

    return 0;
}x