#include<stdio.h>

int main()
{
    int sum=0;
    printf("the no.s are\n");
    for(int i=0;101>i;i++)
       {
           if(i%3==0)
       {
         sum=sum+i ;
         printf("%d\n",i);
       }

       }

    printf("the sum is %d",sum);
    return 0;
}
