#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       if(i==0||i==n/2||i==(n-1)) {for(j=0;j<n;j++){
          printf("*");
        }}else{
        for(j=0;j<n;j++){
            if(j==0||j==(n-1)){printf("*");}
            else{printf("_");}
        }
        }printf("\n");
    }



}
