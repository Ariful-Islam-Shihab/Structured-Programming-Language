#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],*pfirst=&arr[n-1],*ptemp=arr;
    for(int i=0;i<n;i++,ptemp++){
       scanf("%d",ptemp);
    }
    for(int i=0;i<n;i++,pfirst--){
       printf("%d ",*pfirst);
    }
    printf("\n");
    return 0;
}