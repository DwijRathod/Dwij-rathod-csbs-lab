#include<stdio.h>

int main()
{
  int a ,b,c,largest,smallest;

  printf("enter first number : ");
  scanf("%d",&a);

   printf("enter second number : ");
  scanf("%d",&b);

     printf("enter third number : ");
  scanf("%d",&c);

 largest=a;
 if (b>largest)
 {
     largest=b;
 }
 if (c>largest)
 {
     largest=c;
 }
    printf("%d is the largest\n",largest);

smallest=a;
 if (b<largest)
 {
     largest=b;
 }
 if (c<largest)
 {
     largest=c;
 }
    printf("%d is the smallest",smallest);
return 0;
}
