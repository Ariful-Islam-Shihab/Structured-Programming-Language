#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    return 1;
    int fact=n*factorial(n-1);
    return fact;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=factorial(n);
    printf("%d\n",ans);
    return 0;
}