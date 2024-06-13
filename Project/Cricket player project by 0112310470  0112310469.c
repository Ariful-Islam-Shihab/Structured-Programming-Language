/*
project submitted by
Ariful Islam Shihab-Id-0112310470
Tanjin-Ash Shariar Niloy-Id-0112310469
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int mep=0;
int ncp=1000;
int tsp=0;
float hhp=0;
int hrtp=0;
float mvp=0;
int n;
typedef struct{
    char name[50];
    int age;
    char role[50];
    int match;
    int tot_run;
    int h_run;
    float value;
    float avg_run;
}Cricketer;
Cricketer bdplayers[100];
void playerprinter(int i){
        int j=0;
        while(bdplayers[i].name[j]!='\0'){
            Sleep(20);
            printf("%c",bdplayers[i].name[j]);
            j++;
        }
        printf("%d\n",bdplayers[i].age);
        j=0;
        while(bdplayers[i].role[j]!='\0'){
            Sleep(20);
            printf("%c",bdplayers[i].role[j]);
            j++;
        }
        Sleep(20);
        printf("%d\n%d\n%d\n",bdplayers[i].match,bdplayers[i].tot_run,bdplayers[i].h_run);
        printf("\n");
}
void take_input(){
    FILE *f;
    f=fopen("playerstats.txt","r");
    fscanf(f,"%d",&n);
    fgetc(f);
    fgetc(f);
    for(int i=0;i<n;i++){
        fflush(stdin);
        fgets(bdplayers[i].name,50,f);
        fflush(stdin);
        fscanf(f,"%d",&bdplayers[i].age);
        fflush(stdin);
        fgetc(f);
        fflush(stdin);
        fgets(bdplayers[i].role,50,f);
        fflush(stdin);
        fscanf(f,"%d %d %d",&bdplayers[i].match,&bdplayers[i].tot_run,&bdplayers[i].h_run);
        fflush(stdin);
        fgetc(f);
        fflush(stdin);
        fgetc(f);
        fflush(stdin);
        int rounder=strcmp(bdplayers[i].role,"Allrounder\n")==0?50:0;
        bdplayers[i].value=bdplayers[i].age+bdplayers[i].match+bdplayers[i].tot_run+bdplayers[i].h_run+((float)bdplayers[i].tot_run/bdplayers[i].match)+((float)bdplayers[i].h_run/bdplayers[i].age)+rounder;
        bdplayers[i].avg_run=(float)bdplayers[i].tot_run/bdplayers[i].match;
    }
    fclose(f);
}
void findingstats(){
    for(int i=0;i<n;i++){
        if(mep<bdplayers[i].match)
        mep=bdplayers[i].match;
        if(ncp>bdplayers[i].age)
        ncp=bdplayers[i].age;
        if(tsp<bdplayers[i].tot_run)
        tsp=bdplayers[i].tot_run;
        if(hhp<bdplayers[i].avg_run)
        hhp=bdplayers[i].avg_run;
        if(hrtp<bdplayers[i].h_run)
        hrtp=bdplayers[i].h_run;
        if(mvp<bdplayers[i].value)
        mvp=bdplayers[i].value;
    }
}
void showall(){
    for(int i=0;i<n;i++){
        playerprinter(i);
    }
}
void showone(){
    char text[50];
    fflush(stdin);
    gets(text);
    int i=strlen(text);
    text[i]='\n';
    text[i+1]='\0';
    for(int i=0;i<n;i++){
        if(!strcmp(bdplayers[i].name,text)){
            playerprinter(i);
        }
    }
}
void mxp(){
    for(int i=0;i<n;i++){
        if(mep==bdplayers[i].match){
            playerprinter(i);
        }
    }

}
void NCP(){
    for(int i=0;i<n;i++){
        if(ncp==bdplayers[i].age){
            playerprinter(i);   
        }
    }
}
void TSP(){
    for(int i=0;i<n;i++){
        if(tsp==bdplayers[i].tot_run){
            playerprinter(i);
        }
    }
}
void HHP(){
    for(int i=0;i<n;i++){
        if(hhp==bdplayers[i].avg_run){
        playerprinter(i);
        }
    }
}
void HRTP(){
    for(int i=0;i<n;i++){
        if(hrtp==bdplayers[i].h_run){
            playerprinter(i);
        }
    }
}
void MVP(){
    for(int i=0;i<n;i++){
        if(mvp==bdplayers[i].value){
            playerprinter(i);
        }
    }
}
void allrounder(){
    for(int i=0;i<n;i++){
        if(!strcmp(bdplayers[i].role,"Allrounder\n")){
            playerprinter(i);
        }
    }
}
int main()
{
    int a;
    take_input();
    findingstats();
    char text[]="What do you want to do?\n1. Show All Players\n2. Show A Particular player information (Provide Player Name)\n3. Show the MOST Experienced Player (MEP)\n4. Show the New Commer Player (NCP)\n5. Show the Top Scorer Player (TSP)\n6. Show the Hard Hitter Player (HHP)\n7. Show the Highest Run Taker Player (HRTP)\n8. Show the MOST Valuable Player (MVP)\n9. Show the Allrounders\n10. Exit/Quit\n";
    int i=0;
    while(text[i]!='\0'){
        printf("%c",text[i]);
        Sleep(20);
        i++;
    }
    printf("\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        showall();
        break;
        case 2:
        showone();
        break;
        case 3:
        mxp();
        break;
        case 4:
        NCP();
        break;
        case 5:
        TSP();
        break;
        case 6:
        HHP();
        break;
        case 7:
        HRTP();
        break;
        case 8:
        MVP();
        break;
        case 9:
        allrounder();
        break;
        case 10:
        return 0; 
    }
    main();
}