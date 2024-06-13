#include<stdio.h>
int is_prime(int a){
    int check=a>1?1:0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            check=0;
            break;
        }
    }
    return check;
}
int power_of_2(int a){
    if(a==1)
    return 1;
    if(a%2!=0)
    return 0;
    power_of_2(a/2);
}
int is_mersenne(int a){
    if(is_prime(a)&&power_of_2(a+1))
    return 1;
    return 0;
}
int main(){
while(1)
{    int n;
    scanf("%d",&n);
    if(is_mersenne(n))
    printf("Yes\n");
    else
    printf("No\n");
}
}