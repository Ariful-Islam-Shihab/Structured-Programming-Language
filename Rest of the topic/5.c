#include<stdio.h>
int main()
{
    int x,y;
    int *px=&x,*py=&y;
    scanf("%d %d",px,py);
    int temp=*px;
    *px=*py;
    *py=temp;
    printf("%d %d\n",*px,*py);
    return 0;
}