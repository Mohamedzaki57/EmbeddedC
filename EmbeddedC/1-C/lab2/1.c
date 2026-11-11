#include<stdio.h>

void peven (int x, int y)
{
    for (int i =x ; i<= y; i++)
    {
        if ( i % 2 == 0)
           printf(" %i is even \n", i);
        else
           printf(" %i is odd \n" , i);
    }
}

int main(){

    // C program to print the odd even numbers for a given range

    int n1 ,n2;
    printf("from : ");
    scanf("%i" , &n1);
    printf("to : ");
    scanf("%i" , &n2);

 peven(n1,n2);

    return 0;
}