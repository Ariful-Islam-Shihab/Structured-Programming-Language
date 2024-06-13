#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,sum;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    } for(i=0;i<n;i++){
         sum=a[i]+b[i];
         printf("%d ",sum);
    }



}
