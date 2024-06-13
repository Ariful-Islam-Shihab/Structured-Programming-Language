#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int first=-1,second=1;
    for(int i=0;i<n;i++){
        int third=first+second;
        first=second;
        second=third;
        printf("%d ",third);
        if(third==0)
        printf("& ");
        else if(third%2==0)
        printf("$ ");
        else
        printf("# ");

    }
    return 0;
}