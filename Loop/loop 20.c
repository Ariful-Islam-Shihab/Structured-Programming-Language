#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,digit=0,sum=0;
    for(i=1; i<=a; i++)
    {
        digit=digit*10+i;
        sum=sum+digit;
    }
    printf("%d",sum);
}
