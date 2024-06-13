#include<stdio.h>
int main()
{
    int n,i,j,k,l,m,p,o,x,y,z;
    scanf("%d",&n);
    o=(n/2);
    p=(n/2)-1;
    m=(n/2)+1;
    x=1;
    y=n-2;
    z=(n/2);
    for(i=0;i<n;i++){
        if(i<o && i!=0){
            for(j=0;j<n;j++){
                if(j==p||j==m||j==o){printf("$");}
                else{printf("_");}
            }p--;
            m++;

        }else if(i==0 || i==(n-1)){
         for(j=0;j<n;j++){
            if(n/2==j){printf("$");}
            else{printf("_");}
         }
        }else if(i==o){
           for(j=0;j<n;j++){
            printf("$");
           }
        }else if(i>o){
            for(j=0;j<n;j++){
                if(j==x || j==y|| j==z){printf("$");}
                else{printf("_");}

            }x++;
            y--;


        }

        printf("\n");

    }
 return 0;
}
