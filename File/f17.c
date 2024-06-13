#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("sample.txt","w");
    char text[100];
    gets(text);
    fputs(text,f);
    fputc('\n',f);
    gets(text);
    fputs(text,f);
    fputc('\n',f);
    gets(text);
    fputs(text,f);
    fputc('\n',f);
    fclose(f);
    return 0;
}