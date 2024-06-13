#include<stdio.h>
int length(char *p)
{
    int count=0;
    while(*p!='\0'){
        count++;
        p++;
    }
    return count;
}
int main()
{
    char text[100];
    gets(text);
    int k=length(text);
    printf("%d",k);
    return 0;
}
