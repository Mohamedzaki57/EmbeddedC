#include<stdio.h>

int dublicate(int arr[] , int n)
{
    int count=0;
    int appear=0;
    for (int i =0;i<n;i++)
        {
            for (int j=0 ; j<i ; j++)
            {
                if (arr[i]==arr[j])
                    {
                        appear++;
                        break;
                    }

            }
            if(appear==1){continue;}
            for(int j=i+1 ; j<n;j++)
            {
                if(arr[i]==arr[j])
                    count++;
            }
            
        }
        return count;
}

int main(){

    int n ;
    printf("size of list :");
    scanf("%i",&n);

    int arr[n];


    printf("\nenter the elements :");
    for (int i =0;i<n;i++)
        {
            scanf("%i",&arr[i]);
        }

    printf("\nthe number of dublicate element :");
    
    printf("%i",dublicate(arr,n));
    
}