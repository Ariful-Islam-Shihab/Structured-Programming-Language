#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j=0;
    for(i=2;i<a;i++){
        if(a%i==0){
            j=1;
            break;
        }

    }
    if(j==0||a==2){
        printf("Prime");
    }else{
        printf("Not prime");
    }


}
