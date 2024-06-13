#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr,*ps=&sum;
    for(int i=0;i<n;i++){
        *ps+=*p;
        p++;
    }
    printf("%d\n",sum);
    return 0;
}