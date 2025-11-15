#include<stdio.h>

int main()
{
    int x,n = 0;

    printf("write the no" );
    scanf("%d",&x);

    int a = x;
    while(a > 0) {
    a=a/10;
    n=n+1;
    }


   printf("%d",n);

    return 0;
}
