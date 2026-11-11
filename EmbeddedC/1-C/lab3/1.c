#include<stdio.h>

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
    for (int i=n-1;i>=0;i--)
        {
            printf("\n%i",arr[i]);
        }
    
}