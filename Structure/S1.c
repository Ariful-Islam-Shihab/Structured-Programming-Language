#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
    char id[20];
    float cg;
}info;
int main()
{
    info stu;
    strcpy(stu.name,"Ariful Islam Shihab");
    strcpy(stu.id,"0112310470");
    stu.cg=4.00;
    printf("%s %s %f",stu.name,stu.id,stu.cg);
    return 0;
}