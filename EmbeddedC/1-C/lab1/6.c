#include <stdio.h>


int main(){

    unsigned short int n;
    printf("enter number : ");
    scanf("%i",&n);
    printf("\n ");
    
    switch(n){

        case 1: 
           printf("January");
           break;
        case 2: 
           printf("February");
           break;
        case 3: 
           printf("March");
           break;
        case 4: 
           printf("April");
           break;
        case 5: 
           printf("May");
           break;
        case 6: 
           printf("June");
           break;
        case 7: 
           printf("July");
           break;
        case 8: 
           printf("August");
           break;
        case 9: 
           printf("September");
           break;
        case 10: 
           printf("October");
           break;
        case 11: 
           printf("November");
           break;
        case 12: 
           printf("December");
           break;
        default :
           printf("Not Month");
           break;
    }

   

    

 return 0;

}