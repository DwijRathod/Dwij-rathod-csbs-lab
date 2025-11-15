#include<stdio.h>

int main(){

int x,y,n=0;

    printf("write the no: " );
    scanf("%d",&x);
    y =x;
    while(y>0){
       int a=y%10;
        n=n+a;
        y=y/10;
    }
    printf("the sum of no is %d",n);

    return 0;
}
