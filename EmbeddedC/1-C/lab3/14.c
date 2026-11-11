#include<stdio.h>

int main()
{
    //we will read sentance and convert upper to lower and vica verca

    int n=0;
    printf("please enter the size :");
    scanf("%i",&n);
    char s[n];

    printf("\nplease enter the sentance :");
    scanf("%s",s);

    
   for ( int i =0 ;i<n;i++)
       {
           if (s[i]>=65 && s[i]<=90)
               s[i]+=32;
           else if(s[i]>=97 && s[i]<=122)
               s[i]-=32;
            else
               s[i]=s[i];
       }
   
   

    printf("\nthe new sentence is : %s",s);

    
    return 0;
}

