#include<stdio.h>
int unitconversion(int a){
    if(a==0)
    return 0;
    return unitconversion(a/6)*10+a%6;
}
int sumofdigit(int a){
    if(a==0)
    return 0;
    return a%10+sumofdigit(a/10);
}
int sumoffirstandlast(int a){
    return a%10+lastdigit(a);
}
int lastdigit(int a){
   if(a<10)
   return a;
   lastdigit(a/10);
}
int con1(int a){
    if(sumofdigit(unitconversion(a))%5!=0)
    return 0;
    return 1;
}
int primecount(int *a,int *b){
    int count=0;
    for(int i=*a;i<*b;i++){
        int check=i>1?1:0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                check=0;
                break;
            }
        }
        if(check)
        count++;
    }
    return count;
}
int con2(int a){
    int sum=sumoffirstandlast(a);
    int x=0;
    if(primecount(&x,&sum)>4)
    return 1;
    return 0;
}
int main(){
    while(1){int n;
    scanf("%d",&n);
    if(con1(n)||con2(n))
    printf("YES\n");
    else
    printf("NO\n");
    }
}