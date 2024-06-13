#include<stdio.h>
int main()
{
    int n,i,j,k,m,o;
    scanf("%d",&n);
    m=n;
    o=1;
    for(i=0;i<n;i++){
        for(j=0;j<m-1;j++){
            printf("_");
        }for(k=0;k<o;k++){
            printf("*");
        }m=m-1;
        o=o+2;
        printf("\n");
    }



}
