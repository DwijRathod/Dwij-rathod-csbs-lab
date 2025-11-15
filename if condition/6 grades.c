#include <stdio.h>
int main(){
    int a,b,c,d,e,f;

    printf("Enter the marks of physics : ");
    scanf("%d",&a);

    printf("Enter the marks of maths : ");
    scanf("%d",&b);
    printf("Enter the marks of chemistry : ");
    scanf("%d",&c);

    e=a+b+c;
    printf("The total of all subjects is %d\n", e);

    f=e/3;
    printf("Average marks is %d\n",f);



    if (f>70)
    {
       printf("grade = distinction");
    }
    else if (70>f&& f>=60)
    {
       printf("grade = first class");
    }
    else if (60>f&& f>=50)
    {
       printf("grade = second class");

    }
    else if (50>f&& f>=35)
    {
       printf("grade = third class");
    }
}
