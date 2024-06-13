#include<stdio.h>
int checkerfunc1(int a){
    int even=0,odd=0;
    while(a!=0){
        int temp=a%10;
        if(temp%2==0){
            even+=temp;
        }else{
            odd+=temp;
        }
        a=a/10;
    }
    if(odd<even)
    return 1;
    else 
    return 0;
}
int checkerfun2(int a){
    if(primechecker(a)&&defective(a))
    return 1;
    else
    return 0;
}
int primechecker(int a){
    int check=a>1?1:0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            check=0;
            break;
        }
    }
    return check;
}
int fact(int a){
    if(a==0)
    return 1;
    return fact(a-1);
}
int sum_fact(a){
    if(a==0)
    return 0;
    return fact(a%10)+sum_fact(a/10);
}
int defective(int a){
    if(a==sum_fact(a))
    return 0;
    else
    return 1;
}
int demogorgon(int a){
    if(checkerfunc1(a)&&checkerfun2(a))
    return 1;
    else
    return 0;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<b;i++){
        if(demogorgon(i))
        printf("%d ",i);
    }
    return 0;
}