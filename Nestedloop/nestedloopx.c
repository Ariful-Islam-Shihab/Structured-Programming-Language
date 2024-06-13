#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);

    for(i=0;i<n;i++){
      if((n/2)!=i){for(j=0;j<n;j++){
            if(j==0 || j==(n-1)){
                printf("H");
            }else{printf(" ");}
        }}else{
        for(k=0;k<n;k++){
            printf("H");
        }
        }printf("\n");
    }



}
