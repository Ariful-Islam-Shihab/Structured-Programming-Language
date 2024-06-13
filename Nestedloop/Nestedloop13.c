#include<stdio.h>
int main(){

int n,i,j,k,spaces;
scanf("%d",&n);
spaces=n-2;
for(i=1;i<=n-1 ;i++){
       for(j=1;j<=i;j++){
       	printf("%d",j);
       }for(k=1;k<=spaces;k++){
        printf(" ");
       }printf(" ");
       for(k=1;k<=spaces;k++){
        printf(" ");
       }for(j=i;j>=1;j--){
       	printf("%d",j);
       }spaces--;
       printf("\n");
}

for(i=1;i<=n;i++){
	printf("%d",i);
}for(i=n-1;i>=1;i--){
	printf("%d",i);
}






}