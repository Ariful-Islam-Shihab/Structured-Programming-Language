#include<stdio.h>
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
int main(){
    char text[]="anchbc";
    char text2[]="hbc";
    if(substringchecker(text,text2)){
        printf("Hi");
    }
}