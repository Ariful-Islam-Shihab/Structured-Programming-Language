#include<stdio.h>
void reverse(int *p,int *q,int n)
{
 for(int i=0;i<n/2;i++,p++,q--){
    int temp=*q;
    *q=*p;
    *p=temp;
 }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Before\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    reverse(arr,&arr[n-1],n);
    printf("\nAfter\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}