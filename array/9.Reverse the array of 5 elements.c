#include<stdio.h>

int main(){

    int a[5];
    int t;
    for (int i=0 ; i<5 ; i++){
        printf("\nenter the a[%d] : ",i );
        scanf("%d",&a[i]);
    }

    t =a[0];
    a[0]=a[4];
    a[4]=t;

    t =a[1];
    a[1]=a[3];
    a[3]=t;


    printf("the reversed array is\n " );

    for(int i =0 ; i<5 ; i ++)

    {
        printf("%d\t",a[i]);
    }
return 0;
}

