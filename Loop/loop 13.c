#include<stdio.h>
int main()
{
    int x,y,i,z=1;
    scanf("%d%d",&x,&y);
    for(i=0;i<y;i++){
        z=z*x;
    }
    printf("%d",z);



}
