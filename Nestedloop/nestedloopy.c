#include<stdio.h>
int main()
{
    int n,i,j,k,m,l;
    scanf("%d",&n);
    m=n-1;
    for(i=0;i<n;i++){
        if(i==0||i==(n-1)){
            for(j=0;j<n;j++){
            printf("Z");}
        }else{
          for(k=0;k<m;k++){
            printf(" ");
          }printf("Z");
        }m--;
        printf("\n");



    }



}
