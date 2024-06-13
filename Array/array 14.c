#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,c[100];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    int n2;
    scanf("%d",&n2);
    int b[100],j;
    for(j=0;j<n2;j++){
        scanf("%d",&b[j]);
    }for(i=0;i<n2;i++){
        a[i]=b[i];
    }for(i=0;i<n;i++){
        b[i]=c[i];
    }printf("Array A: ");
    for(i=0;i<n2;i++){
        printf("%d ",a[i]);
    }printf("\nArray B: ");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }




}
