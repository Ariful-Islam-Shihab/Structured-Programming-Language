#include<stdio.h>
void add(int *p,int *q)
{
    *p+=*q;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    add(&a,&b);
    printf("%d",a);
    return 0;
}