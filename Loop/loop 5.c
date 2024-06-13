#include<stdio.h>
int main()
{
    int x,y,sqr=1;
    scanf("%d %d",&x,&y);
    if(x>y){
        while(x!=y){
            printf("%d, ",x*x);
            x--;
        }



    }if(x<y){
         while(x!=y){
            printf("%d, ",x*x);
            x++;}



    }

printf("Reached!");

}
