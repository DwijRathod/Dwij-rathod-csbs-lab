#include<stdio.h>

int main()
{
    float a,b;

    printf("Enter sides of rectangle : ");
    scanf("%f,%f",&a,&b);

    printf("\nthe perimeter is : %f",2*a+2*b);
    printf("\nthe area is : %f",a*b);
}
