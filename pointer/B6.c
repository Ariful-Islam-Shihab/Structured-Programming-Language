#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],*pfirst=arr,*ptemp=arr;
    for(int i=0;i<n;i++,ptemp++){
       scanf("%d",ptemp);
    }
    ptemp=&arr[n-1];
    for(;pfirst<ptemp;ptemp--,pfirst++){
       int temp=*ptemp;
       *ptemp=*pfirst;
       *pfirst=temp;
    }ptemp=arr;
    for(int i=0;i<n;i++,ptemp++){
       printf("%d ",*ptemp);
    }
    printf("\n");
    return 0;
}