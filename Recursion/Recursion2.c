#include<stdio.h>
int summation(int n)
{
    if(n==0)
    return 0;
    int sum=n+summation(n-1);
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=summation(n);
    printf("%d\n",ans);
    return 0;
}