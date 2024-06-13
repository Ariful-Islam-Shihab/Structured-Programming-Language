#include<stdio.h>
#include<string.h>
typedef struct{
    char name[60];
    int total_memory;
    int used_memory;
}program;
int all_caps(char *input){
    int check=1;
    while(*input!='\0'){
        if(*input>'Z'||*input<'A'){
            check=0;
            break;
        }
        input++;
    }
    return check;    
}
int mem(int x,int y){
    if(x>=y)
    return 1;
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    program p[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",p[i].name,&p[i].total_memory,&p[i].used_memory);
    }
    for(int i=0;i<n;i++){
        if(all_caps(p[i].name)&&mem(p[i].used_memory,p[i].total_memory))
        printf("%s\n",p[i].name);
    }
    return 0;
}