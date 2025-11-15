#include<stdio.h>

int main(){

    int n , no[8] , org;

    int a[] = {500,200,100,50,20,10,5,2,1} ;

    printf("enter the no :");
    scanf("%D",&n);

    org=n;
    printf("For minimum no of notes :\n");

    for(int i = 0 ; i<9 ;i++){
            no[i] = n/a[i] ;

            n = n-a[i]*no[i];
        printf("the no of %d notes required are %d \n",a[i],no[i]);
    }
    return 0 ;

}
