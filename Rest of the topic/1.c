#include<stdio.h>
int main()
{
    int a,b;
    int *p=&a;
    scanf("%d %d",p,&b);
    *p+=b;
    printf("%d\n",*p);
    return 0;
}