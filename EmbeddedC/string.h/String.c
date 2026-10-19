#include<stdio.h>
#include "String.h"

void * memchr(char s[],char c,int n)
{
    for (int i=0 ; i<n ; i++)
    {
        if(s[i]==c)
        {
            return &s[i];
        }
    }
    return NULL;
}

int memcmp (char * x, char *y, int s)
{
    for (int i=0 ; i<s ; i++)
    {
        if(x[i] > y[i])
        {
            return x[i]-y[i];
        }
        else
        {
            return y[i]-x[i];
        }
    }
}