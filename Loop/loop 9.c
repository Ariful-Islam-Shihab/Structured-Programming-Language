#include<stdio.h>
int main()
{
    int i,numofstu,j;
    float marks,sum=0;
    scanf("%d",&numofstu);
    for(i=0;i<numofstu;i++){
        for(j=0;j<5;j++){
                scanf("%f",&marks);
                sum=sum+marks;}
        if(sum>=90){
            printf("Student %d: A",i+1);
        }else if(sum>=86){
            printf("Student %d: A-",i+1);
        }else if(sum>=82){
            printf("Student %d: B+",i+1);
        }else if(sum>=78){
            printf("Student %d: B",i+1);
        }else if(sum>=74){
            printf("Student %d: B-",i+1);
        }else if(sum>=70){
            printf("Student %d: C+",i+1);
        }else if(sum>=66){
            printf("Student %d: C",i+1);
        }else if(sum>=62){
            printf("Student %d: C-",i+1);
        }else if(sum>=58){
            printf("Student %d: D+",i+1);
        }else if(sum>=55){
            printf("Student %d: D",i+1);
        }else{
            printf("Student %d: F",i+1);
        }


      sum=0;

    }




}
