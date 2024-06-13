#include<stdio.h>
int main()
{
    char text[100];
    char *p=text;
    gets(text);
    char *last=text;
    while(*last!='\0')
    last++;
    int i=(last-p)/sizeof(char);
    printf("%d\n",i);
}