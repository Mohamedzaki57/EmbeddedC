#include<stdio.h>

int main()
{
    //we will copy one array in another

    
    

    char s[]="modjfoh mfjdojfoi mofjsd mojghm igjhg";
    int n =sizeof(s);
    char r[n];

    
   for ( int i =0 ;s[i]!='\0';i++)
       {
           r[i]= s[i];
       }
   
   printf("the size is : %i \n",n);

    printf("%s",r);

    
    return 0;
}

