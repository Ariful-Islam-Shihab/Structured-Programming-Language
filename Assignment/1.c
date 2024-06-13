#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int space;
	for(int i=n;i>=1;i--){
		for(int k=n;k>i;k--){
			printf(" ");
		}for(int j=1;j<=i*2-1;j++){
			printf("*");
		}printf("\n");
	}
	return 0;
}