#include<stdio.h>

int main()
{
    //we will compare two strings

    
    

    char s[]="modjfoh mfjdojfoi mofjsd mojghm igjhg";
    char r[]="musdhoisj jdgiojogdsi gdagih jijgdiaj";

    int n =0;
   for ( int i =0 ;s[i]!='\0';i++)
       {
           if (s[i]>r[i])
              n++;
           else if(s[i]<r[i])
               n--;
       }
   printf("the size is : %i",n);


    
    return 0;
}

