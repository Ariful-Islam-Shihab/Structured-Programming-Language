#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a[n],sum=0,avg;
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%.2f",avg);



}
