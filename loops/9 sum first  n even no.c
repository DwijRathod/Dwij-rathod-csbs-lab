#include<stdio.h>

int main ()
{
    int n;
    printf("enter the n:\n ");
    scanf("%d",&n);

    int  sum =0;
        for(int i=0 ;i<=2*n;i+=2)

    {
        sum+=i;

    }
        printf("%d\n",sum);

}
