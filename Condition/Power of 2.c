#include<stdio.h>
int main()
{
    int i,a,k=1;
    scanf("%d",&a);
    for(i=1;i<=a;i=i*2){
        if(i==a){
            printf("Yes");
            k=0;
            break;
        }
    }

    if(k){
        printf("No");
    }


}
