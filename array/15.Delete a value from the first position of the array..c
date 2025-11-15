#include<stdio.h>

int main(){

int a[5] = {1,3,5,7,9};

int n ,t, b[6];

printf("the orignal array is :");
for (int i =0 ; i<5 ; i++)
{printf("%d\t",a[i]);}


printf("\nthe array after deleting first element  is :");
for (int i = 0 ; i< 5 ; i ++)
{b[i-1]=a[i];}
for (int i = 0 ; i< 4 ; i ++){
printf("%d\t",b[i]);
}

return 0;
}
