#include<stdio.h>

int main(){

int a[5] = {1,3,5,7,9};

int n ,t , p, b[6];

printf("the orignal array is :");
for (int i =0 ; i<5 ; i++)
{printf("%d\t",a[i]);}

printf("\nEnter the position of insertion is : ");
scanf("%d",&p);
printf(" \nEnter the no want to inesrt in %dth poition  is :", p);
scanf("%d", &n) ;

b[p-1] = n ;

printf("\nthe array now is :");
for(int i =0 ; i<p-1 ; i++){b[i]=a[i];    }
for (int i = p-1 ;  i<6 ; i ++)
{b[i+1]=a[i];}
for (int i = 0 ; i< 6 ; i ++){
printf("%d\t",b[i]);
}

return 0;
}
