#include<stdio.h>

int main()
{
    float p,r,t;

    printf("Enter principal value : ");
    scanf("%f",&p);

    printf("\nenter rate of interest per annum%: ");
    scanf("%f",&r);

    printf("\nenter time (years) :");
    scanf("%f",&t);

    printf("\nthe interest is : %f",p*r*t/100);
}
