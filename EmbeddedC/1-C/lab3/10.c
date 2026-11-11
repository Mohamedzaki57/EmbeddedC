#include<stdio.h>

int main()
{
    //we will count the total number of words in the string 

    
    

    char s[]="modjfoh mfjdojfoi mofjsd mojghm igjhg";

   int n =sizeof(s);
   printf("the size is : %i",n);

    int count=1;
  for ( int i =0 ; i< n-2 ; i++)
      {
          if (s[i]==32)
          {
            count ++;
          }
      }

    printf("\nthe number of words in this is: %i ",count);
    return 0;
}

