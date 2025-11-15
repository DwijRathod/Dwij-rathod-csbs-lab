#include<stdio.h>

int main()
{
    int a ,b,smaller,larger ;

    printf("what is the value of first no:" );
    scanf("%d",&a);
    printf("what is the value of second no:" );
    scanf("%d",&b);

    if (a>b)
    {
        printf("%d is larger than %d\n",a,b );
        printf("%d is smaller than %d\n",b,a );
    }
    else
    {

        printf("%d is larger than %d\n",b,a );
        printf("%d is smaller than %d\n",a,b );
    }

}
