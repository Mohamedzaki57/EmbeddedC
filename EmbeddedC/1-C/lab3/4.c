#include<stdio.h>



int main(){


    //print the uniqe elements

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
            
            if (count ==1)
                printf("the uniqe elements : %i \n",arr[i] );

           
            
        }
   
    
}