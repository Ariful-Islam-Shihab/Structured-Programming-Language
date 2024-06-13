#include<stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  for(i=0,j=n-1;i<n/2;i++,j--){
  int temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  }
  for(i=0;i<n;i++){
  printf("%d ",a[i]);
  }
}