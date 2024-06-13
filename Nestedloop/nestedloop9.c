#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(k%2==0){
                printf("0");
            }else{
                printf("1");
            }k++;
        }printf("\n");
    }



}
