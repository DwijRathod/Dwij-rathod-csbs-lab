#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Enter gross slary : ");
    scanf("%f",&a);

    b=a/10;
    printf("\n the allowance is : %f",b);

    c=a*3/100;
    printf("\nthe deduction u : %f",c);

    printf("\nnet salary:%f",a+b-c);
}
