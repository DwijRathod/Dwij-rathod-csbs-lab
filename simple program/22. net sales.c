#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Enter gross sales : ");
    scanf("%f",&a);

    b=a/10;
    printf("\ndiscount: %f",b);

    c=a-b;
    printf("\nnet sales%f",c);
}
