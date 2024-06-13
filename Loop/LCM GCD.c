#include<stdio.h>
int main()
{
    int a,b,x=2,i,gcd=1,lcm=1,c,d;
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    for(i=0;i<100;i++){
        if(a%x==0 && b%x==0){
            gcd=gcd*x;
            a=a/x;
            b=b/x;
        }else{
        x++;
        }
    }

   printf("%d\n",gcd);
   x=2;
   for(i=0;i<100;i++){
    if(c%x==0||d%x==0){
        lcm=lcm*x;
        if(c%x==0){
            c=c/x;
        }if(d%x==0){
         d=d/x;
        }
    }else{
    x++;
    }


   }

printf("%d",lcm);
}
