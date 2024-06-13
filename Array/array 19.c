#include<stdio.h>
int main()
{
    int n,m,i,j;
    int ay=1;
    printf("Type element number for A");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("Type element number for B");
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j]){
                printf("%d ",a[i]);
                ay=0;
            }
        }
    }

   if(ay!=0){
    printf("NOT FOUND");
   }
}
