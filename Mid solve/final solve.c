#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int matrix[a][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			scanf("%d",&matrix[i][j]);
		}
	}int flag=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(j<i && matrix[i][j]!=0){
				flag=1;
				break;
			}
		}
	}int result;
	if(flag==0){
		result=1;
        for(int i=0;i<a;i++){
             result=result*matrix[i][i];
        }
	}else{
		result=0;
		for(int i=0;i<a;i++){
             result=result+matrix[i][i];
        }

	}printf("%d\n",result);
	return 0;

}