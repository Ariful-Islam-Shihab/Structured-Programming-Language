#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("delete.txt","r");
    char text[1000];
    int i=0,line[50],j=1;
    line[0]=0;
    while(!feof(f)){
        text[i]=fgetc(f);
        if(text[i]=='\n'){
            line[j]=i;
            j++;
        }
        i++;
    }
    if(!feof(f)){
        text[i]='\0';
    }
    text[i]='\0';
    fclose(f);
    f=fopen("delete.txt","w");
    int rem;
    scanf("%d",&rem);
    i=line[rem-1];
    text[i]='a';
    int k;
    while(text[i]!='\n'){
        for(k=i;text[k]!='\0';k++){
            text[k]=text[k+1];
        }
    }
    i=0;
    while(text[i]!='\0'){
        fputc(text[i],f);
        i++;
    }
    fclose(f);
    return 0;
}
