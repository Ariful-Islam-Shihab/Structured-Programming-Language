#include<stdio.h>
int main()
{
    int n,i,factorial=1;
    scanf("%d",&n);
    printf("%d!=",n);
    for(i=n;i>0;i--){
        if(i!=1){
            printf("%d X ",i);
        }else{
            printf("1");
        }
        factorial=factorial*i;
    }

        printf("= %d",factorial);

}
