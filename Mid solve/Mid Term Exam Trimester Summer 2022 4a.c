#include <stdio.h>
int main()
{
int F[6] = {0};
int i, n;
n = 3;
for(i = 0; i<6 ; i++){
F[i] = n+i;
if(F[i]%2 == 0){
F[i] *= 2;
}
printf("%d %d %d %d %d %d %d %d\n",i,n,F[0],F[1],F[2],F[3],F[4],F[5]);
}
}