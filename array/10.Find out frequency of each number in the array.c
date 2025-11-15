#include<stdio.h>

int main(){

int a[10];
int f[10] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 };

for (int i=0 ; i<10 ; i++)
{printf("enter the a[%d]",i);
scanf("%d",&a[i]);
}

for(int i=0 ;i<10 ; i++){
    for (int j =0;j<10 ; j++){
        if (a[j]==i){f[i]+=1 ;}
        }}
printf("\n NO.:");
for(int i = 0 ; i<10 ; i++)
{printf("%d\t",i);
}
printf("\n fr.:");
for(int i = 0 ; i<10 ; i++){
printf("%d\t",f[i]);
}
return 0;
}
