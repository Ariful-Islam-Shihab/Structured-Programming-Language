#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,j=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=n-1;i>=0;i--){
        b[j]=a[i];
        j++;
    } printf("Array A: ");
    for(i=0;i<n;i++){
       printf("%d ",a[i]);
    }printf("\nArray B: ");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }




}
