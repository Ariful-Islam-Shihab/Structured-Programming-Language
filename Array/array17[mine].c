#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,j,min=1000000000,k;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(min>a[j] && a[j]!=1624063264){
                min=a[j];
                k=j;
            }

        }
        b[i]=min;
        min=1000000000;
        a[k]=1624063264;

    }


    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }


}
