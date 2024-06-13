#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int combination(int n,int r)
{
    if(r==0)
    return 1;
    float c= (1.0*fact(n-1))/(fact(r)*fact(n-1-r))+combination(n-1,r-1);
    return c;
}
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int ans=combination(n,r);
    printf("%d\n",ans);
    return 0;
}