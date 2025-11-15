#include<stdio.h>

int main(){

int a[5] = {1,3,5,7,9};

int n ,t , p, b[6];

printf("the orignal array is :");
for (int i =0 ; i<5 ; i++)
{printf("%d\t",a[i]);}

printf("\nEnter the position to delete : ");
scanf("%d",&p);


printf("\nthe array now is :");
for(int i =0 ; i<p ; i++){b[i]=a[i];    }
for (int i = p;  i<6 ; i ++)
{b[i-1]=a[i];}
for (int i = 0 ; i< 4 ; i ++){
printf("%d\t",b[i]);
}

return 0;
}
