#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,max;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==0){
            max=a[i];
        }else{
            if(max<a[i]){
                max=a[i];
            }
        }


    }
    for(i=0;i<n;i++){
        if(max==a[i]){
            printf("Index: %d Max: %d",i+1,max);
        }
    }




}
