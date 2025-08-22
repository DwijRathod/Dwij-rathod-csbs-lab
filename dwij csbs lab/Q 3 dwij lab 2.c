#include<stdio.h>

int main()
{
    float a,b;

    printf("enter your number : ");
    scanf("%f",&a);
b=a%7;
  if(b==0)
    {
        printf("%f is divisible by 7",a);
    }
    else
        printf("%f is not divisible by 7",a);
 return 0;
}
