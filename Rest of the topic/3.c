#include<stdio.h>
int main()
{
    int arr[]={5,6,7,8};
    int *p=arr;
    for(int i=0;i<4;i++){
        printf("%d ",*p);
        p=p+1;
    }
    return 0;
}