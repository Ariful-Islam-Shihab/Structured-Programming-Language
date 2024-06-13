#include<stdio.h>
int main()
{
    FILE *f;
    char text[1000];
    f=fopen("sample.txt","r");
    int i=0;
    while(text[i]!=EOF){
        text[i]=fgetc(f);
        i++;
    }
    text[i]='\0';
    printf("%s",text);
    fclose(f);
    return 0;
}