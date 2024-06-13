#include<stdio.h>
int compare(char *p,char *q)
{
    while(*p!='\0'||*q!='\0'){
        if(*p>*q)
        return 1;
        else if(*p>*q)
        return -1;
        
        p++;
        q++;
    }
    return 0;
}
int main()
{
    char text[100],text2[100];
    gets(text);
    gets(text2);
    int k=compare(text,text2);
    printf("%d",k);
    return 0;
}
