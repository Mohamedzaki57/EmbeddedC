#include<stdio.h>

typedef struct{
    float real;
    float imaginary;
}complex;

complex add(complex a, complex b)
{
    complex result;

    result.real=a.real+b.real;
    result.imaginary =a.imaginary+b.imaginary;

    return result;
}

complex multiply(complex a, complex b)
{
    complex result;

    result.real =(a.real*b.real) - (a.imaginary*b.imaginary);
    result.imaginary=(a.real*b.imaginary)+(a.imaginary*b.real);

   return result;
}

int main()
{
    complex x ,y , sum ,mul;

    printf("please enter the real and imaginary for the first complex : ");
    if(scanf("%f %f",&x.real,&x.imaginary)!=2)
    {
        printf("\ninvalid input\n");
        return 1;
    }

    
    printf("please enter the real and imaginary for the second complex : ");
    if(scanf("%f %f",&y.real,&y.imaginary)!=2)
    {
        printf("\ninvalid input\n");
        return 1;
    }
    sum = add(x,y);
    mul =multiply(x,y);

    printf("the addition of this two complex numbers is : %.2f +%.2f i\n",sum.real,sum.imaginary);
    printf("the multyplication of this two complex numbers is : %.2f +%.2f i\n",mul.real,mul.imaginary);

}