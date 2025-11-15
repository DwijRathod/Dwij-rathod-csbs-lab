#include<stdio.h>

int main ()
{
    int n;
    printf("enter the n:\n ");
    scanf("%d",&n);
        for(int i=0 ;i<=2*n;i+=2)
        printf("%d\n",i);
}
