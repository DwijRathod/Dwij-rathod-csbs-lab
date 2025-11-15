#include<stdio.h>

int main(){

int num , org , y=0  ;

    printf("Enter the number:");
    scanf("%d",&num);

    org=num ;

    for(int i=2;i<num;i++){
       int a=num%i;
        if( a== 0)
    {
        y=y+1;
    }}

    if(y = 2){
        printf("The number is prime number");
    }
    else {
         printf("The number is not prime number");
    }


return 0;
}
