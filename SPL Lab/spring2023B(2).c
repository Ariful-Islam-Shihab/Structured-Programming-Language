#include<stdio.h>
typedef struct{
    char name[60];
    int stage;
    int HP;
    int price;
}card;
int ends_with(char *input,char letter){
    int i=0;
    while(*(input+i)!='\0')
    i++;
    if(*(input+i-1)==letter)
    return 1;
    return 0;
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    card pok[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        gets(pok[i].name);
        scanf("%d %d",&pok[i].stage,&pok[i].HP);
        pok[i].price=50;
        pok[i].price+=pok[i].HP;
        if(pok[i].stage==1)
        pok[i].price+=30;
        if(pok[i].stage==2)
        pok[i].price+=80;
        if(ends_with(pok[i].name,'X'))
        pok[i].price+=200;
        sum+=pok[i].price;        
    }
    printf("%d\n",sum);
    return 0;
}