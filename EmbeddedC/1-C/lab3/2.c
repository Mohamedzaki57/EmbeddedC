#include<stdio.h>



int main(){

    int n ;
    printf("size of list :");
    scanf("%i",&n);

    int arr[n],ar2[n];

    printf("\nenter the elements :");
    for (int i =0;i<n;i++)
        {
            scanf("%i",&arr[i]);
        }

    printf("\nthe new list");
    for (int i =0;i<n;i++)
        {
            ar2[i]=arr[i];
            printf("\n%i",ar2[i]);
        }
    
}