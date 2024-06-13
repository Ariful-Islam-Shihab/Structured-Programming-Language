#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],arr2[n],*pfirst=arr,*ptemp=arr,*psecond=arr2;
    for(int i=0;i<n;i++,ptemp++){
       scanf("%d",ptemp);
    }
    for(int i=0;i<n;i++,pfirst++,psecond++){
       *psecond=*pfirst;
    }
    ptemp=arr2;
    for(int i=0;i<n;i++,ptemp++){
       printf("%d ",*ptemp);
    }
    return 0;
}