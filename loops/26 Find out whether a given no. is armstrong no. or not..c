#include<stdio.h>
int main(){

int num  , sum=0 ,cube=0 ,orignum, r ;

printf("enter the integer ");
scanf("%d",&num);

orignum = num ;

while(num != 0){
    r=num%10;
    cube=r*r*r;
    sum=sum+cube;
    num /= 10;
}

if(orignum=sum)
   printf("%d is an armstrong no:",sum);
else
    printf("%d is not an armstrong no:",sum);

    return 0;
}
