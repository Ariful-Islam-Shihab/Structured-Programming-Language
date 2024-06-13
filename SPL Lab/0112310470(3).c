#include<stdio.h>
int main()
{
    int n,num=1;
    float avg,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",num);
        sum=sum+num;
        num=num+i*2;
    }
    avg=sum/n;
    printf("\n%d",(int)avg);
    return 0;

}
