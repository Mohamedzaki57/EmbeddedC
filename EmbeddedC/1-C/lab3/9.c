#include<stdio.h>




int main(){


    //convert decimal num into binary

   
   int n;
   printf("enter the number :");
   scanf("%i",&n);
    printf("\n 0b");
    while(n!=0)
        {
            if (n==1)
            {
                printf("1");
                n--;
            }
            else if(n%2==0)
            {
                printf("0");
                n/=2;
            }
            else if (n%2==1)
            {
                printf("1");
                n=(n-1)/2 ;
            }
                
        }
    
   
    return 0;
}