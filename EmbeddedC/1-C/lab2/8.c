#include<stdio.h>

int alpha(char x)
{
    if (x =='a' ||x=='e'||x=='i'||x=='o'||x=='u')
        printf("%c :Vowel",x);
    else if (x =='A' ||x=='E'||x=='I'||x=='O'||x=='U')
        printf("%c :Vowel",x);
    else
        printf("%c :constant",x);

    
    return 0;
}

int main(){

    // C program for alphabet

    char x;
    printf("enter the letter ");
    scanf("%c" , &x);
  

    alpha(x);
    
 

    return 0;
}