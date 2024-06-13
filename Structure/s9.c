#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
    char id[20];
    float cg;
}info;
void print(info stud[],float max){
    for(int i=0;i<2;i++){
    if(max==stud[i].cg)
    printf("%s %s %f\n",stud[i].name,stud[i].id,stud[i].cg);
    }
}
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
    print(stu,max);
    return 0;
}