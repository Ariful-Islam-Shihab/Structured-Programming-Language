#include<stdio.h>
int summation(int n,int term,int first,int second)
{
    if(n==2)
    return 1;
    term=first+second;
    first=second;
    second=term;
    int sum=term+summation(--n,term,first,second);
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=summation(n,0,0,1);
    printf("%d\n",ans);
    return 0;
}