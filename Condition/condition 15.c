#include<stdio.h>
int main()
{
    int X,n1,n2,n3;
    scanf("%d",&X);
    scanf("%d",&n1);
    if(n1!=X){
        printf("Wrong, 2 chances left!");
        scanf("%d",&n2);
        if(n2!=X){
           printf("Wrong, 1 chance(s) left!");
           scanf("%d",&n3);
           if(n3!=X){
              printf("Wrong, 0 Chance(s) Left!\n");
              printf("Player-1 wins!");
           }else{
              printf("Right, Player-2 wins!");
           }

        }else{
           printf("Right, Player-2 wins!");
        }
    }else{
        printf("Right, Player-2 wins!");
    }




}
