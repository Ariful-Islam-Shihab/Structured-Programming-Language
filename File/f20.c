#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("sample.txt","r");
    char text[1000];
    int i=0;
    while(text[i]!=EOF){
        text[i]=getc(f);
        i++;
    }
    text[i]='\0';
    i=0;
    int count=1;
    while(text[i]!='\0'){
        if(text[i]=='\n')
        count++;
        i++;
    }
    printf("%d\n",count);
    fclose(f);
    return 0;
}