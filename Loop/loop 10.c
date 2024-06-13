#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }else{
            sum=sum-i;
        }


    }
    printf("Result: %d",sum);



}
