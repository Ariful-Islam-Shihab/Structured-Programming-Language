#include<stdio.h>
int main()
{
    int n,i,j,k,l=2;
    float sum,power=1,factorial=1,y;
    scanf("%d",&n);
    sum=n;
    for(i=1;i<=15;i++){
        for(j=0;j<i+l;j++){
            power=power*n;
        }for(k=1;k<=i+l;k++){
            factorial=factorial*k;
        }
        y=power/factorial;
        if(i%2!=0){
            sum=sum-y;
        }else{
            sum=sum+y;
        }
        l++;
        power=1;
        factorial=1;

    }
    printf("%f",sum);

}
