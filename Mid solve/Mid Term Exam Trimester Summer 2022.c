#include <stdio.h>
int main()
{
int sum=0, i, a = 1, b, x = 1, y = 1;
for(i=1; i<=5; i++) {
sum = sum + a;
b = 6*x + 1;
a = a + b;
y++;
x = x + y;
printf("%d %d %d %d %d %d \n",i,a,b,x,y,sum);
}
}