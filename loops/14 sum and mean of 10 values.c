#include<stdio.h>
int main(){


    int a[9],sum=0;
    printf("the nos are");
    for(int i=0;i<11;i++)
   {
       printf("%d\n",a[i]);
       sum=sum+a[i];
   }
   printf("the sum is %d",sum);

   int mean=sum/10;
   printf("\nthe mean of nos is %d",mean);

   return 0;
}
