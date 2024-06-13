#include<stdio.h>
void copy(int *p,int *q,int k)
{
  for(int i=0;i<k;i++,p++,q++){
        *q=*p;
  }
}
int main()
{
    int n;
    scanf("%d",&n);
    int src[n], dest[n];
    for(int i=0;i<n;i++){
    dest[i]=0;
    scanf("%d",&src[i]);
    }
    printf("Before\n");
    for(int i=0;i<n;i++)
    printf("%d ",dest[i]);
    copy(src,dest,n);
    printf("\nAfter\n");
    for(int i=0;i<n;i++)
    printf("%d ",dest[i]);
    return 0;
}