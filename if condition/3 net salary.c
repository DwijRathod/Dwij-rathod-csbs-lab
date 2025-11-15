#include<stdio.h>

int main()
{
    float a,b,c;


    printf("Enter gross slary : ");
    scanf("%f",&a);

    if(a>10000)
   { b=a/10;
    printf("\n the allowance is : %f",b);

    c=a*3/100;
    printf("\nthe deduction u : %f",c);
    }
    else if (a>5000&&a<10000)
    {
    b=a*7/100;
    printf("\n the allowance is : %f",b);

    c=a*2/100;
    printf("\nthe deduction u : %f",c);
    }

    printf("\nnet salary:%f",a+b-c);
}
