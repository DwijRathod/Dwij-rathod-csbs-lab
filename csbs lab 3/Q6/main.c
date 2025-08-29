#include<stdio.h>

int main(void){
    
    int n ;
    printf("enter the value of n : ");
    scanf("%d",&n);
    
    for(int i=0; i<n; i+=2)
    printf("%d\n",i);
    
    return 0;
}
