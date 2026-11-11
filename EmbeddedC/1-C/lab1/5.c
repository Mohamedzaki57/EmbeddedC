#include <stdio.h>


int main(){

    unsigned short int n1,n2;

    printf("number 1 = ");         // take num 1 from user 
    scanf("%i", &n1);
    printf("number 2 = ");         // take num 2 from user 
    scanf("%i", &n2);

    if (n1%n2==0 || n2%n1==0)
        printf("Multiplied");
    else
        printf("Not Multiplied");
   

    

 return 0;

}