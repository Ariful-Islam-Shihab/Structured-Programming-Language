#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==0){
        printf("Zero is not a valid input");
    }else if(a<0){
        printf("Negative input is not valid");
    }
    else if((a&(a-1))==0){
        printf("Yes");
    }else{
        printf("No");
    }




}

