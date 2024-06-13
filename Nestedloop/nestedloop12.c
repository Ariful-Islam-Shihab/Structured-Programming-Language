#include<stdio.h>
int main()
{
    int n,i,j,k,m,o,p,x,q,r,y,z;
    scanf("%d",&n);
    m=n;
    o=1;
    p=n/2;
    q=1;
    r=n-2;
    for(i=0;i<n;i++){
        if(i<p){ for(j=0;j<m-1;j++){
            printf("_");
        }for(k=0;k<o;k++){
            printf("*");
        }m=m-1;
        o=o+2;}
        else if(i==p){
            for(x=0;x<n;x++){
                printf("*");
            }
        }else if(i>p){
            for(y=0;y<q;y++){
                printf("_");
            }for(z=0;z<r;z++){
                printf("*");
            }q++;
            r=r-2;

        }
        printf("\n");
    }



}
