#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
    char id[20];
    float cg;
}info;
int main()
{
    info stu[2];
    float max=0;
    for(int i=0;i<2;i++){
        fflush(stdin);
        gets(stu[i].name);
        gets(stu[i].id);
        scanf("%f",&stu[i].cg);
        if(max<stu[i].cg)
        max=stu[i].cg;
    }
    for(int i=0;i<2;i++){
    if(max==stu[i].cg)
    printf("%s %s %f\n",stu[i].name,stu[i].id,stu[i].cg);
    
    }
    return 0;
}