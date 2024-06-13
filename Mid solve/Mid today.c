// // #include<stdio.h>
// // int main()
// // {
// // 	int a,b;
// // 	scanf("%d %d",&a,&b);
// // 	if(!(a-b)&&++a){
// // 		printf("pattern\n");
// // 	}if((a>0&&b>0)||(a<0&&b<0)){
// // 		printf("Fizz\n");
// // 		if(a>0){
// // 			printf("Positive\n");
// // 			return 0;
// // 		}if(b<0)
// // 		printf("negetive\n");
// // 	}else if(a>0 && b<0){
// // 		printf("Buzz\n");
// // 	}else{
// // 		printf("FizzBuzz\n");
// // 	}
// // }
// #include<stdio.h>
// int main()
// {
// 	int n;
// 	scanf("%d",&n);
// 	int A[n];
// 	for(int i=0;i<n;i++){
// 		scanf("%d",&A[i]);
// 	}
// 	int s1,e1,s2,e2;
// 	s1=0;e1=n/2-1;s2=n/2+1;e2=n-1;
// 	for(int j=s1,k=e1;j<=e1/2;j++,k--){
// 		int temp=A[j];
// 		A[j]=A[k];
// 		A[k]=temp;
// 	}for(int j=s2,k=e2,l=0;l<=n/4-1;j++,k--,l++){
// 		int temp=A[j];
// 		A[j]=A[k];
// 		A[k]=temp;
// 	}	for(int i=0;i<n;i++){
// 		printf("%d ",A[i]);
// 	}
// }
// #include<stdio.h>
// int main()
// {
// 	int n;
// 	scanf("%d",&n);
// 	for(int i=1;i<=n;i++){
// 		for(int j=1;j<=n-i;j++){
// 			printf(" ");
// 		}for(int j=1;j<=5;j++){
// 			printf("*");
// 		}printf("\n");
// 	}
// 	return 0;
// }
#include<stdio.h>
int main()
{
	int n;
	printf("|\n");
	printf("_");

	// scanf("%d",&n);
	// for(int i=1;i<=n;i++){
	// 	for(int j=1;j<=n-i;j++){
	// 		printf(" ");
	// 	}for(int j=1;j<=5;j++){
	// 		printf("*");
	// 	}printf("\n");
	// }
	return 0;
}