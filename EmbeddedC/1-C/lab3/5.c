#include<stdio.h>



int main(){


    //count the frequency of each element

    int n ;
    printf("size of list :");
    scanf("%i",&n);

    int arr[n];

    printf("\nenter the elements :");
    for (int i =0;i<n;i++)
        {
            scanf("%i",&arr[i]);
        }

   
    for (int i =0;i<n;i++)
        {
            int count =0;
            for(int j=0 ; j<n;j++)
            {
                if(arr[i]==arr[j])
                    count++;
            }
            
            
                printf("the frequency of element %i: %i \n",i,count );

           
            
        }
   
    
}