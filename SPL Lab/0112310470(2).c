#include<stdio.h>
int main()
{
    int a,b,cool[100],count=0;
    scanf("%d %d",&a,&b);
    int min,max;
    min=a<b?a:b;
    max=a>b?a:b;
    for(int i=min,j=0;i<=max;i++){
        int temp,prime=0,even=0;
        temp=i;
        int dig=temp%10;
        if(dig==2||dig==3 || dig==5 || dig==7){
            prime=1;
        }while(temp!=0){
            dig=temp%10;
            temp=temp/10;
            if(dig%2==0){
                even++;
            }
        }if(prime==1 && even%2==0){
           cool[j]=i;
           count++;
           j++;
        }
    }
    printf("%d: ",count);
    for(int i=0;i<count;i++){
        printf("%d ",cool[i]);
    }
    return 0;

}
