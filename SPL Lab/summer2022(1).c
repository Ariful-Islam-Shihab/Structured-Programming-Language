#include<stdio.h>
typedef struct{
    char name[20];
    char id[10];
    float cg;
}students;
int main()
{
    int n;
    float max=0;
    scanf("%d",&n);
    students res[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        gets(res[i].name);
        gets(res[i].id);
        scanf("%f",&res[i].cg);
        if(max<res[i].cg)
        max=res[i].cg;
    }
    for(int i=0;i<n;i++){
        if(max==res[i].cg){
            puts(res[i].name);
            puts(res[i].id);
            printf("%.1f\n",res[i].cg);
        }
    }
    return 0;
}