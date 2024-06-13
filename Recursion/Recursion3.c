#include<stdio.h>
int summation(int n)
{
    if(n==1)
    return 1;
    int sum=n+summation(n-4);
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=summation(4*n-3);
    printf("%d\n",ans);
    return 0;
}