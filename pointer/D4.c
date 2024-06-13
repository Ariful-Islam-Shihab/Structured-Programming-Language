#include<stdio.h>
void concatenates(char *p,char *q)
{
    while(*p!='\0'){
    p++;
    }
    while(*q!='\0'){
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
}
int main()
{
    char text[100],text2[100];
    gets(text);
    gets(text2);
    concatenates(text,text2);
    puts(text);
    return 0;
}
