#include<stdio.h>
int main(){
    int arr[5];

    for(int i =0;i<5;i++)
      {
          printf("enter the no %d ",i+1);
          scanf("%d",&arr[i]);
    }

    printf("%d %d %d %d %d ",arr[0],arr[1],arr[2],arr[3],arr[4]);

    return 0;
}
