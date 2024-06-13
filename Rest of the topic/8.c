#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],*plast=&arr[n-1],*pfirst=arr;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(;plast>=pfirst;plast--)
    printf("%d ",*plast);
    return 0;
}