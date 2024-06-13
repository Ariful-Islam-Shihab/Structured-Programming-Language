#include<stdio.h>
int main()
{
    int m,n;
    int *pm=&m,*pn=&n;
    scanf("%d %d",pm,pn);
    printf("%d\n",*pm+*pn);
    return 0;
}