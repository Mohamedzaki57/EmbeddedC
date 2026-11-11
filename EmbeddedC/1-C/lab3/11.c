#include<stdio.h>

int main()
{
    //we will get the length of the string without using library

    
    

    char s[]="modjfoh mfjdojfoi mofjsd mojghm igjhg";

    int n =1;
   for ( int i =0 ;s[i]!='\0';i++)
       {
           n++;
       }
   printf("the size is : %i",n);


    
    return 0;
}

