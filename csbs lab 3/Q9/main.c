#include<stdio.h>

int main(void){
    
    int n,sum=0;
    
    printf("enter value of n : ");
    scanf("%d",&n);
    
    for(int i=0;i<=2*n;i+=2)
    {
        sum += i;}
    printf("%d",sum);
}

