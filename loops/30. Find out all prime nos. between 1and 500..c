#include<stdio.h>

int main(){

printf("the prime number till 500 are :");
for(int n= 1 ; n< 500; n++){
    for(int i =2 ; i<sqrt(n) ; i++){
        int a=n%i;
        if(a = 0){printf(" ,%d",n);}
    }
}
return 0 ;
}
