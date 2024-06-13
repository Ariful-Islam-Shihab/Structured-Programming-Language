#include<stdio.h>
int main()
{
    int n,m,i,j,k;
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
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(b[i]==a[j]){
                for(k=j;k<n;k++){
                    a[k]=a[k+1];
                }
                j--;
                n--;
            }
        }
    }

  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}

