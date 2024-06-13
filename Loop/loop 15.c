#include<stdio.h>
int main()
{
    int x,y,i,pow=1;
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++){
        pow=pow*x;
    }
    printf("%d",pow);




}
