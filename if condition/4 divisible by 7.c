#include<stdio.h>

int main()
{
    int a , b ;

    printf("enter value:");
    scanf("%d",&a );

    b=a%7;

    if (b==0)

    {
        printf("\n%d is divisible by 7",a);
    }
    else
        {
        printf("\n%d is not divisible by 7",a);
    }
}
