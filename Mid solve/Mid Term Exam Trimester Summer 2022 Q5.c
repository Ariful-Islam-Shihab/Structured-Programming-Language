#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=(n-i+1)*2;j>=1;j=j-2){
			printf("%d  ",j);
		}printf("\n");
	}
}