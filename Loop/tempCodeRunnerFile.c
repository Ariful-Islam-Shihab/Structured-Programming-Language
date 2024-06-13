#include<stdio.h>
int main()
{
    int a,i;
    float b,avg,sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%f",&b);
        sum=sum+b;
    }
    avg=sum/a;
    printf("%f",avg);


}
