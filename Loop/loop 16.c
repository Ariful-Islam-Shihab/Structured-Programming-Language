#include<stdio.h>
int main()
{
    int a,b,c,d,i,GCD=1,LCM=1,e,k=2;
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    e=a>b ? a : b;
    for(i=1; i<=e; i++)
    {
        if(a%k==0 && b%k==0)
        {
            GCD=GCD*k;
            a=a/k;
            b=b/k;
        }
        else
        {
            k++;
        }
    }
    k=2;
    for(i=1; i<=e; i++)
    {
        if(c%k==0 || d%k==0)
        {
            LCM=LCM*k;
            if(c%k==0)
            {
                c=c/k;
            }
            if(d%k==0)
            {
                d=d/k;
            }
        }
        else
        {
            k++;
        }
    }
    printf("GCD: %d\n",GCD);
    printf("LCM: %d",LCM);




}
