#include<stdio.h>
typedef struct{
    char name[50+1];
    int age;
    char role[50+1];
    int match;
    int tot_run;
    int h_run;
}Cricketer;
Cricketer bdplayers[100];
int main()
{
    FILE *f;
    f=fopen("lala.txt","r");
    int n;
    fscanf(f,"%d",&n);
    fflush(stdin);
    fgetc(f);
    fflush(stdin);
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
    }
        // printf("%s",bdplayers[0].name);
        // printf("%d\n",bdplayers[0].age);
        // printf("%s",bdplayers[0].role);
        // printf("%d\n%d\n%d\n",bdplayers[0].match,bdplayers[0].tot_run,bdplayers[0].h_run);
    for(int i=0;i<n;i++){
        printf("%s",bdplayers[i].name);
        printf("%d\n",bdplayers[i].age);
        printf("%s",bdplayers[i].role);
        printf("%d\n%d\n%d\n",bdplayers[i].match,bdplayers[i].tot_run,bdplayers[i].h_run);
    }
    fclose(f);
    return 0;
}