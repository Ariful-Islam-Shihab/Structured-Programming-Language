#include<stdio.h>
void increase(int *p)
{
    *p+=5;
}
int main()
{
    int a;
    scanf("%d",&a);
    increase(&a);
    printf("%d",a);
    return 0;
}