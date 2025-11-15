#include<stdio.h>

int main(){

int x,y;

    printf("write the no" );
    scanf("%d",&x);

    y=x;

    while(y>0)
    {int a=y%10;
    printf("%d",a);
    y=y/10;

    }

return 0;
}
