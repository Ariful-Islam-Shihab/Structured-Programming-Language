#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b[a],i,sum=0;
    for(i=0;i<a;i++){
        scanf("%d",&b[i]);
        sum=sum+b[i];
    }
    printf("%d",sum);



}

