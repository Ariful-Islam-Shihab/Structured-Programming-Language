#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int array[n],palindrome,prime,divisible;
	palindrome=prime=divisible=0;
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(int i=0;i<n;i++){
		int reverse=0,temp=array[i],flag=0;
		while(temp!=0){
			reverse=reverse*10+(temp%10);
			temp=temp/10;
		}
		if(reverse==array[i])
			palindrome++;
		for(int k=2;k<array[i];k++){
			if(array[i]%k==0){
				flag=1;
				break;
			}
		}
		if(flag==0 && array[i]!=0 && array[i]!=1){
			prime++;
		}
		if((array[i]%5==0)&&(array[i]%2!=0))
			divisible++;

	}
	printf("#palindromes: %d\n",palindrome);
	printf("#primes: %d\n",prime);
	printf("#numbers divisible by 5 but not divisible by 2: %d\n",divisible);
	return 0;
}