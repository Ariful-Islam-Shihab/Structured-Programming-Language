#include<Stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,num=0,c;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    for(i=0;i<n;i++){
        if(c==a[i]){
            printf("Found at index position: %d, %d",c,i);
            num=1;
            break;
        }
    }
    if(num==0){
        printf("NOT FOUND");
    }



}
