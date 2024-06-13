#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }scanf("%d",&x);
    for(int i=0;i<x;i++){
        int max=array[i],index=i;
        for(int j=i+1;j<n;j++){
            if(max<array[j]){
                max=array[j];
                index=j;
            }
        }int temp=max;
        array[index]=array[i];
        array[i]=max;
        for(int k=0;k<n;k++){
            printf("%d ",array[k]);
        }printf("\n");
    }
    return 0;
}
