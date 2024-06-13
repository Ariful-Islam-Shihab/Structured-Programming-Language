#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],*pfirst=arr,*ptemp=arr;
    for(int i=0;i<n;i++,ptemp++){
       scanf("%d",ptemp);
    }
    ///EVEN
    for(int i=0;i<n;i++,pfirst++){
       if(*pfirst%2==0)
       printf("%d ",*pfirst);
    }
    printf("\n");
    ///ODD
    pfirst=arr;
    for(int i=0;i<n;i++,pfirst++){
       if(*pfirst%2!=0)
       printf("%d ",*pfirst);
    }
    return 0;
}