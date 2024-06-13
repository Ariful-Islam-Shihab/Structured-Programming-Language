#include<stdio.h>
int main()
{
    int first=1,second=1,third,n,i;
    scanf("%d",&n);
    if(n==1){
        printf("1");
    }else if(n==2){
        printf("1 1");
    }else{
        printf("1 1 ");
    for(i=2;i<n;i++){
        third=first+second;
        printf("%d ",third);
        first=second;
        second=third;


    }


    }



}
