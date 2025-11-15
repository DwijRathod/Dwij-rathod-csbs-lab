#include<stdio.h>

int main(){

int a[5] = {1,3,5,7,9};


printf("the orignal array is :");
for (int i =0 ; i<5 ; i++)
{printf("%d\t",a[i]);}


printf("\nthe array after deleting last element  is :");

for (int i = 0 ; i< 4 ; i ++){
printf("%d\t",a[i]);
}

return 0;
}
