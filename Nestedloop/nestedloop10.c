#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(j<=i){printf("*");}
            else{printf("_");}
        }printf("\n");
    }




}
