#include<stdio.h>

int main(void) {
    
    int n, i=0 ;
    printf("enter the value of n : ");
    scanf("%d", &n);
    
    do{
        i++;
        printf("%d\n", i);
        
    }while(i<n);
    
}
