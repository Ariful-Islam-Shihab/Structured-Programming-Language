#include<stdio.h>
int main()
{
    int n,i,j,k,l,m;
    scanf("%d",&n);
    l=0;
    m=n-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==l||j==m){printf("*");}
            else{printf("_");}
        }l++;
        m--;
        printf("\n");
    }
return 0;
}
