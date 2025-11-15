#include<stdio.h>

int main()
    {
    int a[100];
    for(int i=1;i<= 100;i++) {
        a[i-1] = i;
    }
    int j,temp;

    for(int i=1;i<=100;i++){
        for(j=0;j<=99-i;j++)
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;}
    }

            printf("smallest no is %d\n",a[1] );
            printf("largest no is %d",a[100]);

            return 0;


        }

