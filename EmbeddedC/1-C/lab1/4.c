#include <stdio.h>


int main(){

    unsigned short int s,m,h;

    printf("seconds = ");         // take seconds from user 
    scanf("%i", &s);

    h = s / 3600;
    s %= 3600;
    m = s / 60;
    s %= 60;

    printf("Time = %i:%i:%i \n" , h+m+s);

   

    

 return 0;

}