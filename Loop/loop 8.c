#include<stdio.h>
int main()
{
    int a,c,sum=0;
    scanf("%d",&a);
    while(a!=0){
        c=a%10;
        a=a/10;
        sum=sum*10+c;


    }
    printf("%d",sum);



}
