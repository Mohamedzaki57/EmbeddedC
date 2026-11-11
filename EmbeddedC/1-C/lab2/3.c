#include<stdio.h>

int multitable(int n)
{
    for (int i =1 ; i <=10 ; i++)
    {
        printf("%i \n" , n*i);
    }
    return 0;
}

int main(){

    // C program to print multiplication table 

    int n;
    printf("multiplication table for : ");
    scanf("%i" , &n);

    multitable(n);
    
 

    return 0;
}