#include<stdio.h>
int sumdigit(int n)
{
    if(n<10)
    return n;
    int sum= (n%10)+sumdigit(n/10);
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=sumdigit(n);
    printf("%d\n",ans);
    return 0;
}