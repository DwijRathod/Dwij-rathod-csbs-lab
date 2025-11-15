#include<stdio.h>

int main ()
{
int num ;

printf("Enter the no :");
scanf("%d",&num);

int x,y ;

x = num % 10;

y = (num*num) % 10;


if(x==y)
  {printf("the %d is automorphic",num);}
  else{printf("the %d is not automorphic", num );}

  return 0;
}

