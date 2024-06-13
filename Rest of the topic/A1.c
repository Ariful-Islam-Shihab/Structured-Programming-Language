#include<stdio.h>
int main()
{
    int n,*p=&n;
    scanf("%d",p);
    printf("%d",*p);
    return 0;
}