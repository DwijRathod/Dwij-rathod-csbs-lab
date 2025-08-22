#include<stdio.h>

int main()
{
    float ns,gs,a,d;

printf("enter gross salary : ");
scanf("%f",&gs);

 if (gs>10000)
 {
     a=0.1*gs;
     d=0.03*gs;
 }
 else if (gs>5000&&gs<10000)
 {
     a=0.07*gs;
     d=0.02*gs;
 }
 else if (gs<5000)
 {

     a=1*gs;
     d=1*gs;
 }

 ns = gs+a-d;

 printf("your net salary is %f ",ns);

 return 0;
}
