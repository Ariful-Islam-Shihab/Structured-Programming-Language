#include<stdio.h>
int main()
{
int n = 5, sum = 0, i, a = 3, sign = 1;
for(i = 1; i<=n; i++)
{
sum = sum + a*sign;
if(i%2==0)
a = a + 6;
else
a = a + 4;
sign = -sign;
printf("%d %d %d %d %d \n",i,n,sign,a,sum);
}
printf("\n%d", sum);
}