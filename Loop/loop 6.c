#include<stdio.h>
int main()
{
    int x,n,nx,i;
    scanf("%d",&x);
    scanf("%d",&n);
    for(i=n-1;i>=0;i--){
        scanf("%d",&nx);
        if(nx!=x){
            printf("Wrong, %d chance(s) Left!\n",i);
        }else{
            printf("Right, Player-2 wins!\n");
            break;
        }

    }
    if(i==-1){
        printf("Player-1 wins!\n");
    }


}
