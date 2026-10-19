#include<stdio.h>
typedef struct {
 
    char a[20];
    int size ;
    
    int capacity
}string;
int memcmp1 (string x, string y);
void * memchr1(string s, char c);
void memcpy1(string d , string s);
void memset1(string d);
void strcat1(string d, string s);
int strcmp1( string d , string s);
void strcpy1(string d , string s );
int strlen1(string d);
void strncat1(string d, string s , int n);
int strncmp1( string d , string s,int n);
void strncpy1(string d , string s , int n);
char * strrchr1(string d,char c);
char * strstr1(string d, string s);
string strtok (string d, char c);

int main(){

string a={
    .a={'a','s','d','f','g'},
    .size=5,
    .capacity=10
} ;
string b={
    .a={'h','j','k','l','g'},
    .size=5,
    .capacity=10
} ;

printf("%i",memcmp1(a,b));

return 0;

}
string strtok (string d, char c)
{ 
    int n=0;
    for(int i=d.size-1; i>-1;i--)
    {
      if (d.a[i]==c)
      {
        n=d.size-i-n;
        string a={
          .a=d.a[i],
          .size=n,
          .capacity=n
        } ;
       return a;
      }
    }
}
char * strstr1(string d, string s)
{
    int flag;
    for (int i =0; i<d.size ;i++)
    {
        flag =0;
        for (int j=0; j<s.size; j++)
        {
           if( d.a[i+j]==s.a[j])
             flag++;
        }
        if (flag==s.size)
           return &d.a[i];
    }
}
char * strrchr1(string d,char c)
{
  for (int i=d.size-1;i>-1; i++)
  {
    if (d.a[i]==c)
      return &d.a[i];
  }
}
void strncpy1(string d , string s , int n)
{

   for(int i=0; i< n;i++)
   {
    s.a[i]=d.a[i];
   }
}

int strncmp1( string d , string s,int n)
{
    int x=0;
    for(int i=0;i<n; i++)
    {
        if (d.a[i]>s.a[i])
         x++;
        else if(d.a[i]<s.a[i])
          x--;
         
    }
    return x;

}
void strncat1(string d, string s , int n)
{
    for(int i=d.size; i<n+d.size ; i++)
    {
        d.a[i]=s.a[i-d.size];
    }
}

int strlen1(string d)
{
    return d.size;
}
int strcspn1(string d, char c)
{
    for (int i=0; i<d.size; i++)
    {
        if (d.a[i]==c)
          return i+1;
    }
}
void strcpy1(string d , string s )
{

  for (int i=0; i< d.size ;i++)
  {
    s.a[i]=d.a[i];
  }

}

int strcmp1( string d , string s)
{
    int x=0;
    for(int i=0;i<d.size; i++)
    {
        if (d.a[i]>s.a[i])
         x++;
        else if(d.a[i]<s.a[i])
          x--;
         
    }
    return x;

}
void strcat1(string d, string s)
{
    for(int i=d.size; i<s.size+d.size ; i++)
    {
        d.a[i]=s.a[i-d.size];
    }
}
void memset1(string d)
{
    for(int i=0; i<d.size ; i++)
    {
        d.a[i]=0;
    }
}

void memmove1(string d , string s)
{
    for(int i=d.size; i<d.size+s.size ; i++)
    {
        d.a[i]=s.a[i-s.size];
    }
}

void memcpy1(string d , string s)
{
    for(int i=0; i<d.size ; i++)
    {
        d.a[i]=s.a[i];
    }
}

void * memchr1(string s, char c)
{
    for (int i=0 ; i<s.size ; i++)
    {
        if(s.a[i]==c)
        {
            return &s.a[i];
        }
    }
    return NULL;
}

int memcmp1 (string x, string y)
{
    for (int i=0 ; i<x.size ; i++)
    {
        if(x.a[i] > y.a[i])
        {
            return x.a[i]-y.a[i];
        }
        else
        {
            return y.a[i]-x.a[i];
        }
    }
}