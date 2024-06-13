#include<stdio.h>
void copy(char *p,char *q)
{
    while(*p!='\0'){
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
}
int main()
{
    char text[100],text2[100];
    gets(text);
    copy(text,text2);
    puts(text2);
    return 0;
}
