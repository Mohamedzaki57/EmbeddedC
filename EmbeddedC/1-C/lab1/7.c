#include <stdio.h>

int main() {
    
    unsigned short int n;
    printf("enter number : ");
    scanf("%i",&n);
    printf("\n ");

    for( short i = 1 ;i<=100;i++)
        {
            if(i%n==0 )
                printf("%i \n" , i);
        }
    
    return 0;
}