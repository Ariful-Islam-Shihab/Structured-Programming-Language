#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("sample.txt","a");
    char text[100];
    int i=0;
    while(text[i]!='\0'){
        scanf("%c",&text[i]);
        i++;
    }
    fputs(text,f);
    fclose(f);
    return 0;
}