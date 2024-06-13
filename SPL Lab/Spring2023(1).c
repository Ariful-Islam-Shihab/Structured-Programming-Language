#include<stdio.h>
int is_prime(int x){
    int check=x>1 ? 1:0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            check=0;
            break;
        }
    }
    return check;
}
int digit_sum(int x){
    if(x==0)
    return 0;
    return x%10+digit_sum(x/10);
}
int is_superprime(int x){
    if(is_prime(x)&& is_prime(digit_sum(x)))
    return 1;
    else 
    return 0;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int min=a<b?a:b;
    int max=a>b?a:b;
    for(int i=min;i<max;i++){
        if(is_superprime(i))
        printf("%d\n",i);
    }
    return 0;
}