#include<stdio.h>

typedef struct student  {

  char name[20] ;
  int age ; 
  int marks ;
}student;

int main(){

  int n=0;
  printf("enter the number of the student :");
  scanf("%i",&n);

  student s[n];
  for (int i=0;i<n ;i++)
  {
    printf("\nenter name student%i : ",i+1);
    scanf("%s",s[i].name);
      printf("\nenter age student%i : ",i+1);
    scanf("%i",&s[i].age);
      printf("\nenter marks student%i : ",i+1);
    scanf("%i",&s[i].marks);
  }
   
  int total=0;
  for ( int i=0; i<n ;i++)
  {
    total+=s[i].marks;
  }
    float avr =((float)total)/n;
    printf("total marks :%i \n",total);
 printf("average marks :%.2f\n",avr);

    int max =0;
    for ( int i=0; i<n ;i++)
    {
        if(s[i].marks > max)
       max=s[i].marks;
    }
     printf("the highest mark :%i \n",max);

    int top[3] ={0,0,0};
    for ( int i=0; i<n ;i++)
    {
        if(s[i].marks > top[0])
        {
            top[2]=top[1];
            top[1]=top[0];
            top[0]=s[i].marks;
            
            
       
        }
        else if(s[i].marks > top[1]    )
        {
              top[2]=top[1];
              top[1]=s[i].marks;
            
        }
        else if(s[i].marks > top[2] )
        {
           top[2]=s[i].marks;
            
        }
    }
     for ( int i=0; i<3 ;i++)
       {
          printf("the top %i :%i \n",i+1,top[i]);
       }
    
}