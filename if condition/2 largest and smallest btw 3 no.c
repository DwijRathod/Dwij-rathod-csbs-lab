#include<stdio.h>

int main()
{
    int a ,b,c ;

    printf("what is the value of first no:" );
    scanf("%d",&a);
    printf("what is the value of second no:" );
    scanf("%d",&b);
    printf("what is the value of third no:" );
    scanf("%d",&c);

    if (a>b&&b>c)
    {
        printf("%d is largest \n",a );
        printf("%d is smallest \n",c );
    }

    else if (a>c&&c>b)
    {
        printf("%d is largest \n",a );
        printf("%d is smallest \n",b );
    }

    else if (b>a&&a>c)
    {
        printf("%d is largest \n",b );
        printf("%d is smallest \n",c );
    }

    else if (b>c&&c>a)
    {
        printf("%d is largest \n",b );
        printf("%d is smallest \n", a);
    }

    else if (c>a&&a>b)
    {
        printf("%d is largest \n",c );
        printf("%d is smallest \n",b );
    }

    else if (c>b&&b>a)
    {
        printf("%d is largest \n",c );
        printf("%d is smallest \n",a );
    }

}
