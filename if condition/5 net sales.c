#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Enter gross sales : ");
    scanf("%f",&a);

    if (a>20000)
    {
    b=a*15/100;
    printf("\ndiscount: %f",b);
    }

    else if (a>10000 && a<20000)
    {
    b=a/10;
    printf("\ndiscount: %f",b);
    }
    else if (a<10000)
    {
    b=a/20;
    printf("\ndiscount: %f",b);
    }

    c=a-b;
    printf("\nnet sales%f",c);
}
