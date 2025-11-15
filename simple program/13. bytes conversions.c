#include<stdio.h>

int main()
{
    float x;

    printf("bytes:");
    scanf("%f",&x);

    printf("value in KB: %f" ,x/1000);
    printf("\n value in MB:%f" ,x/1000000);
    printf("\n value in GB:%f",x/1000000000);
}

