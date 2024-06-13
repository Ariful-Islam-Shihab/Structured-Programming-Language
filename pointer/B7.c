#include<stdio.h>
int main()
{
    int n,search;
    scanf("%d",&n);
    int arr[n],*p=arr,*ptemp=&search;
    for(int i=0;i<n;i++,p++){
       scanf("%d",p);
    }
    scanf("%d",ptemp);
    p=arr;
    int flag=0;
    for(int i=0;i<n;i++,p++){
        if(*ptemp==*p){
            flag=1;
            break;
        }
    }if(flag==1){
        int *p5=&arr[0];
        int a=(p-p5);
        printf("Found at index %d",a);
    }else
    printf("Not Found");
    printf("\n");
    return 0;
}