#include<stdio.h>
int main()
{
    int a[200];
    int positiveCount=0;
    int negativeCount=0;
    int zeroCount=0;

    for(int i=-99;i>-100&&i<101;i++)
    {   a[i+99]=i;}

    for (int i=0;i<201;i++)
    {
    if (a[i]<0)
    negativeCount++;
    else (a[i]>0);
    positiveCount++;
    if (a[i]=0)
    zeroCount++;
    }
    printf("the count of negative no.s is%d",negativeCount);
    printf("the count of positive no.s is%d\n",positiveCount);
    printf("the count of zeros no.s is%d\n",zeroCount);

    return 0;
}
