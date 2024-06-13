#include<stdio.h>
int sumdigit(int n,int rev)
{
    if(n==0)
    return rev;
    return sumdigit(n/10,(rev*10)+(n%10));
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=sumdigit(n,0);
    printf("%d\n",ans);
    return 0;
}