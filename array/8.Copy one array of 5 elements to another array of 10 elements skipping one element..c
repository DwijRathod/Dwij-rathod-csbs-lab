#include<stdio.h>

int main(){

int a[5];
int b[10];
for (int i = 0 ; i < 5 ; i++)
{   printf("enter the value of a[%d]:",i);
    scanf("%d",&a[i]);
}
for (int i = 0 ; i < 5 ; i++){
printf("%d\t",a[i]);}

printf("\n the matrix is :\n");
for (int i =0;i<5;i++){
  b[2*i] =a[i];
}

for (int i = 0 ; i<10 ; i ++)
{printf("%d\t",b[i] );}

return 0;
}
