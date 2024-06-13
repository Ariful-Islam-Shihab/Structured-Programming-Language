#include<stdio.h>
int main()
{
    int a,b,c,gcd;
    scanf("%d %d",&a,&b);
    int x,y,z;
    x=a>b?a:b;
    y=a<b?a:b;
    while(y>0){
        z=x%y;
        gcd=y;
        x=y;
        y=z;
    }printf("%d",gcd);
}
