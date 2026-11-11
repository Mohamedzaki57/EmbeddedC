#include<stdio.h>



int main(){


    //print the max and the min

    int n ;
    printf("size of list :");
    scanf("%i",&n);

    int arr[n], arr2[n];
   

    
    printf("\nenter the elements :");
    for (int i =0;i<n;i++)
        {
            scanf("%i",&arr[i]);
        }

    int max=arr[0] ,min=arr[0];
   
    for (int i =0;i<n;i++)
        {
            if(arr[i]>max)
                max=arr[i];
            if (arr[i]<min)
                min = arr[i];
            
            
        }
    printf("max element : %i, min element : %i \n",max,min);

    
   
    
}