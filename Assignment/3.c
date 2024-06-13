#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k;
	scanf("%d",&k);
	while(k!=n){
		if(k>n)
			printf("Your input is greater than N\n");
		else
			printf("Your input is less than N\n");
		scanf("%d",&k);
	}
	printf("Congratulations! Your input is equal to N!!");
	return 0;
}