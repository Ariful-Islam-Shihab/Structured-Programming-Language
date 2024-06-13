#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int marks[100];
	for(int i=0;i<n;i++){
		scanf("%d",&marks[i]);
	}int max=-9999999,index=0;
	for(int i=1;i<n;i++){
		if(max<marks[i] && marks[i]%2==0){
			max=marks[i];
			index=i;
		}
	}
	printf("Max=%d Index=%d\n",max,index);
	return 0;
}