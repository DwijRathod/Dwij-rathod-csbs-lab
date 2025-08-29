#include<stdio.h>

int main(void){
    
    int n,sum=0;
    printf("enter value of n : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {sum += i;}
    printf("%d",sum);
    }


