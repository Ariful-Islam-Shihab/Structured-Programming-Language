#include<stdio.h>
#include<math.h>
int summation(int n)
{
    if(n==0)
    return 1;
    int sum=pow(2,n)+summation(n-1);
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=summation(n-1);
    printf("%d\n",ans);
    return 0;
}