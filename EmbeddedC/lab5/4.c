#include<stdio.h>
#include<string.h>

#define MAX_EMPLOYEES 100

 typedef enum { FULL_TIME =1,PART_TIME, INTERN } type; /////////we make in this point an enum for his typw of work
 
 typedef enum
    {
         monthly_salary=1,
          hourly_rate
    }pay;

 typedef union{
    float hourly_rate;
   int monthly_salary;
 }pa;
typedef struct{
    char id[15];
    char name[30];
    int department;
    type type;
    pay pay;
    pa pa;
    float hours_worked;
    
}emp;

void add( emp p[],int n);
void removeemp( emp p[],int *n,int x);      // x is the index that i want to remove
void filter( const emp p[], int n);      //   n type of the emp
float totalpay(const emp p[],int x , int n );
void search(const emp p[],char id[], int n);


int main(void)
{
    int n;

    printf("Number of employees you want to add: ");

    if (scanf("%d", &n) != 1 ||
        n < 1 || n > MAX_EMPLOYEES) {
        printf("Invalid number of employees.\n");
        return 1;
    }

    emp p[MAX_EMPLOYEES];
    add(p, n);

    int choice;

    printf("\n1 - Remove\n");
    printf("2 - Filter\n");
    printf("3 - Search\n");
    printf("4 - Total pay\n");
    printf("Choose an operation: ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice.\n");
        return 1;
    }

    switch (choice) {
        case 1: {
            int index;

            printf("Enter the employee index to remove : ");

            if (scanf("%d", &index) != 1) {
                printf("Invalid index.\n");
                break;
            }

            removeemp(p, &n, index);
            break;
        }

        case 2:
            filter(p, n);
            break;

        case 3: {
            char id[15];

            printf("Enter the employee ID: ");

            if (scanf("%14s", id) != 1) {
                printf("Invalid ID.\n");
                break;
            }

            search(p, id, n);
            break;
        }

        case 4:
           int x ;
            printf("Total payroll: %.2f\n", totalpay(p,x,n));
            break;

        default:
            printf("Invalid operation.\n");
            break;
    }

    return 0;
}
void add( emp p[],int n)
{
    
    for (int i = 0; i < n; i++) {
       int t, r;
    // char id[15];
    // char name[30];
    // int dep, t ,r;
    // pay p;
    printf("\nenter the id :");
    scanf("%14s",p[i].id);
    printf("\nenter the name :");
    scanf("%29s",p[i].name);
    printf("\ndepartments: 1-social , 2-programmers , 3-managers");
    if(scanf("%i",&p[i].department)!=1 || p[i].department<1 || p[i].department >3)
    {
        printf("\ninvalid department");
        return;
    }
    p[i].type =(type)t;
    printf("\ntypes: 1-fulltime , 2-parttime , 3-enters");
    if(scanf("%i",&t)!=1 ||t < 1|| t >3)
    {
        printf("\ninvalid department");
        return;
    }
    
    p[i].pay =(pay)r;

    printf("\npayroll: 1-month salary , 2-hour rate"); 

    if(scanf("%i",&r)!=1 || r<1 || r >2)
    {
        printf("\ninvalid department");
        return;
    }

    else if(r==monthly_salary)
    { 
         printf("Enter monthly salary: ");

      if (scanf("%d", &(p[i].pa.monthly_salary) )!= 1 ||  p[i].pa.monthly_salary < 0) 
      {
        printf("Invalid salary.\n");
        return;
      }
    }
    else 
    {  printf("Enter hourly rate: ");

    if (scanf("%f", &(p[i].pa.hourly_rate)) != 1 || p[i].pa.hourly_rate < 0) 
    {
        printf("Invalid hourly rate.\n");
        return;
    }

    printf("enter hours he works : ");

    if(scanf("%f",&(p[i].hours_worked))!=1 || p[i].hours_worked<0)
    {
       printf("invalid hours\n");
       return ;
    }
    
   }
  }
}
void removeemp(emp p[], int *n, int x)
{
    if (x < 0 || x >= *n) {
        printf("Invalid employee index.\n");
        return;
    }

    for (int i = x; i < *n - 1; i++) {
        p[i] = p[i + 1];
    }

    (*n)--;

    printf("Employee removed successfully.\n");
}
void filter(const emp p[], int n){

    int d;
     printf("\ndepartments: 1-social , 2-programmers , 3-managers");
     
     if(scanf("%i",&d)!=1 || d< 1|| d >3)
    {
        printf("\ninvalid department");
        return;
    }


    for (int i=0;i<n; i++)
    {
      if(d==1 && p[i].department ==1){
        printf("\nname :%29s \n",p[i].name);
      }
      else if(d==2 && p[i].department ==2){
        printf("\nname :%29s \n",p[i].name);
      }
      else if(d==3 && p[i].department ==3){
        printf("\nname :%29s \n",p[i].name);
      }
    }
}

void search(const emp p[],char id[] , int n){
 
int found =0;
    for ( int i=0; i< n ;i++)
    {
        if(strcmp(p[i].id,id)==0)
        {
            printf("name : %29s\n",p[i].name);
            printf("full id: %14s\n",p[i].id);
            printf("department(1-social 2-programmers 3-managers): %i \n",p[i].department);
            found =1;
        }
    }
  if(found ==0)
  {
    printf("invalid id\n");
  }
}
float totalpay(const emp p[],int x, int n  ){

  if (x<0 || x> n)
  {
    printf("invalid index\n");
    return 1;
  }
   
  if (p[x].pay == 1)
  {
    printf("this employee paid by month and this salary is : %i \n",p[x].pa);
  }
  else{
     float total;
     total = p[x].pa.hourly_rate * p[x].hours_worked;
    printf("this employee paid by hour rate and his salary for this month is : %.2f \n",total);
  }
    ////////////the end of this ///////////////////
}