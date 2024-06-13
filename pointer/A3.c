#include<stdio.h>
int main()
{
    int a,b,*pa=&a,*pb=&b;
    scanf("%d %d",pa,pb);
    int temp=*pa;
    *pa=*pb;
    *pb=temp;
    printf("%d %d",*pa,*pb);
    return 0;
}