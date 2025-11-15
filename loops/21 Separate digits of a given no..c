#include<stdio.h>

int main(){

int x,y,z,a,b;

    printf("write the no" );
    scanf("%d",&x);

    y=x%10;
    printf("%d,",y);
    x=x/10;
    a=x%10;
    printf("%d,",a);
    x=x/10;
    printf("%d",x);

return 0;
}
