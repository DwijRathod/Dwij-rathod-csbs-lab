#include<stdio.h>

int main(){
    int n , x = 0, y = 1 ;

    printf("enter the no of fibonacci series");
     scanf("%d",&n);


     printf("0,1,");
     for(int i =1 ; i < n ; i++)
     {int k = x+y ;
     printf("%d,",k);
     x=y;
     y=k;
     }
    return 0;
}
