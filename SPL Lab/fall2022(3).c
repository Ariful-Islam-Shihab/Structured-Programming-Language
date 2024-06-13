#include<stdio.h>
#include<string.h>
typedef struct{
    char id[20];
    char name[20];
    char birthday[20];
    char house[20];
    int pur[3];
    float avg;
}customer;
int substringchecker(char *main,char *sea){
    for(int i=0;*(main+i)!='\0';i++){
        int check=1;
        for(int j=i,k=0;*(sea+k)!='\0';k++,j++){
            if(*(main+j)!=*(sea+k)){
                check=0;
                break;
            }
        }
        if(check)
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    float avg1=0,avg2=0;
    scanf("%d",&n);
    customer c[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        // gets(c[i].id);
        gets(c[i].name);
        gets(c[i].birthday);
        gets(c[i].house);
        fflush(stdin);
        float sum=0;
        for(int j=0;j<3;j++){
        scanf("%d",&c[i].pur[j]);
        sum+=c[i].pur[j];
        }
        c[i].avg=sum/3.0;
        if(!strcmp(c[i].house,"Gryffindor")&&avg1<c[i].avg&&substringchecker(c[i].name,"est"))
        avg1=c[i].avg;
        if(!strcmp(c[i].house,"Slytherin")&&avg2<c[i].avg&&substringchecker(c[i].name,"rus"))
        avg2=c[i].avg;
        fflush(stdin);
    }
    printf("%f %f\n\n",avg1,avg2);
    int count=0;
    printf("Gryffindor:\n");
    for(int i=0;i<n;i++){
        if(!strcmp(c[i].house,"Gryffindor")){
            char text[]="est";
            if(substringchecker(c[i].name,text)&&avg1==c[i].avg){
                puts(c[i].name);
                puts(c[i].birthday);
                printf("%.2f\n",c[i].avg);
                count++;
            }
        }
    }
    if(count==0)
    printf("Nil\n\n");
    
    count=0;
    printf("Slytherin\n");
    for(int i=0;i<n;i++){
        if(!strcmp(c[i].house,"Slytherin")){
            char text[]="rus";
            if(substringchecker(c[i].name,text)&& avg2==c[i].avg){
                puts(c[i].name);
                puts(c[i].birthday);
                printf("%.2f\n",c[i].avg);
                count++;
            }
        }
    }
    if(count==0)
    printf("Nil\n\n");

}