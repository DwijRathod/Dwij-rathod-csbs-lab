#include<stdio.h>

int main(){

int a,i;

printf("enter value of a : ");
scanf("%d",&a);

    while(a!=0)
{
    i=a%10;
    a=a/10;

printf("%d",i);
}
return 0;
}
