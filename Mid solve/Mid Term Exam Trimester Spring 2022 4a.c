#include<stdio.h>
int main()
{
int F[6]={0};
int i;
F[0]=1;
F[1]=1;
for(i=2; i<=5; i++){
F[i]=F[i-1]+F[i-2];
printf("%d %d %d %d %d %d %d\n",i,F[0],F[1],F[2],F[3],F[4],F[5]);
}
printf("%d %d %d %d",i,F[i-2], F[i-1], F[i-1]+F[i-2]);
}