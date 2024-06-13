#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1,term=0;i<=n;i++){
			printf("%d ",term);
			sum+=term;
			term+=i*8-3;
	}printf("\n%d ",sum);
}