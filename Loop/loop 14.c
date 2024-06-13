#include<stdio.h>
int main()
{
    int n,r,facn=1,facr=1,facr_1=1,i,c;
    scanf("%d %d",&n,&r);
    for(i=1;i<=n;i++){
        facn=facn*i;
    }
    for(i=1;i<=r;i++){
        facr=facr*i;
    }
    for(i=1;i<=(n-r);i++){
        facr_1=facr_1*i;
    }
    c=facn/(facr*facr_1);
    printf("%d",c);
}
