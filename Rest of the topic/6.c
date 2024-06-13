#include<stdio.h>
int main()
{
    char text[100],vowel[]="aeiouAEIOU";
    char *p=text;
    gets(text);
    int countv=0,countc=0;
    while(*p!='\0'){
        int flag=0;
        for(int i=0;i<10;i++){
            if(*p==vowel[i]){
                flag=1;
                break;
            }
        }
        if(flag==1)
        countv++;
        else{
            if((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z'))
            countc++;
        }
        p++;
    }
    printf("%d %d\n",countv,countc);
    return 0;
}