#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,low=1;
    float up=x,sum=0;
    for(i=1;i<10;i=i+2){
        sum+=(up/low);
        up*=(-x*x);
        low*=(i+1)*(i+2);
    }
    printf("%f",sum);




}
