#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,num,pos;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Number: ");
    scanf("%d",&num);
    printf("Position: ");
    scanf("%d",&pos);
    for(i=0;i<n;i++){
        if(i==pos){
            a[i]=num;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
