#include<stdio.h>
int main()
{
    int n,i,j,k,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){m=1;
            for(k=1;k<=3 && m<=j;k++){
                if(k==1){printf("!");}
                else if(k==2){printf("@");}
                else{printf("#");}m++;
            }
        }
        printf("\n");
    }




}
