#include<stdio.h>

int main(){

int num , sum = 0 , org;

printf("Enter the number:");
scanf("%d",&num);

org=num;

for(int i=1 ; i<=num; i++){
    if(num % i == 0){
    sum = sum + i ;
    }
}

if(sum=org){
    printf("The number is perfect number");}
else {
    printf ("The number is not perfect number ");
}
return 0 ;
}
