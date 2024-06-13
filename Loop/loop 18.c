#include<stdio.h>
int main()
{
    int a,c,sum=0;
    scanf("%d",&a);
    int b=a;
    while(b!=0){
        c=b%10;
        b=b/10;
        sum=sum*10+c;


    }
    if(sum==a){
        printf("Yes");
    }else{
        printf("No");
    }



}

