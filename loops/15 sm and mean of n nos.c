#include<stdio.h>
int main(){

    int n;
    printf("write count of nos");
    scanf("%d",&n);

    int a[n],sum=0;
    printf("the nos are\n");
    for(int i=0;i<n+1;i++)
   {
       printf("%d\n",a[i]);
       sum=sum+a[i];
   }
   printf("the sum is %d",sum);

   int mean=sum/n;
   printf("\nthe mean of nos is %d",mean);

   return 0;
}
