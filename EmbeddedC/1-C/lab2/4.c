#include<stdio.h>

int rangel(int x)
{
    
    for (int i =x ; i >= 0 ; i--)
    {
        for ( int j = 0 ; j<=x ; j++)
            {
                if ( j == i || j> i)
                    printf("*");
                else
                    printf(" ");
            }
        printf("\n");
    }
    return 0;
}

int main(){

    // C program to print right angle triangle

    int n;
    printf("right angel triangle for  : ");
    scanf("%i" , &n);

    rangel(n);
    
 

    return 0;
}