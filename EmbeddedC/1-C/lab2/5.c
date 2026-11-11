#include<stdio.h>

int pyramid(int x)
{
    
    for (int i =0 ; i <=x ; i++)
    {
        for ( int j = 0 ; j<= 2*x ; j++)
            {
                if ( j >= x-i && j<=x+ i)
                    printf("*");
                else
                    printf(" ");
            }
        printf("\n");
    }
    return 0;
}

int main(){

    // C program to print pyramid

    int n;
    printf("pyramid for  : ");
    scanf("%i" , &n);

    pyramid(n);
    
 

    return 0;
}