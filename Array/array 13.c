#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,num,pos;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Position: ");
    scanf("%d",&pos);
    for(i=0;i<n;i++){
        if(i==pos){
            break;
        }
        printf("%d ",a[i]);
    }
    for(i=pos+1;i<n;i++){
        printf("%d ",a[i]);
    }

}

