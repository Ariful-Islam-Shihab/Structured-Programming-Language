#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i<j){printf("_");}
            else{printf("%d",i);}
        }
        printf("\n");
    }





}
