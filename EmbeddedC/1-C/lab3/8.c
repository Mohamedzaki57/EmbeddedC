#include<stdio.h>



int main(){


    //sort the array in descending order and print it 

    int n ;
    printf("size of list :");
    scanf("%i",&n);

    int arr[n], arr2[n];
   

    
    printf("\nenter the elements :");
    for (int i =0;i<n;i++)
        {
            scanf("%i",&arr[i]);
        }

    

    int temp;
    for (int i =0;i<n-1;i++)
        {
          for (int j=n-1; j>i;j--)
             {
               if(arr[j]<arr[j-1])
               {
                temp =arr[j];
                arr[j]=arr[j-1]; 
                arr[j-1]=temp;
               }      
            }
            
        }
    
    
    
    for (int i=0; i<n ; i++)
        {
            printf("\n%i ",arr[i]);
        }

    
   
    return 0;
}