#include<stdio.h>

int prime(int x ,int y)
{
    for (int i =x ; i<=y ; i++)
        {
            if(i==0 || i==1)
                continue;
            else if (i ==2 || i == 3 )
                printf("%i :prime\n", i);
            else if (i%2!=0 && i%3 !=0)
                printf("%i :prime\n", i);
          
                
        }
   

    
    return 0;
}

int main(){

    // C program to print prime numbers

    int x,y;
    printf("from  : ");
    scanf("%i" , &x);
    printf("to : ");
    scanf("%i" , &y);

    prime(x,y);
    
 

    return 0;
}