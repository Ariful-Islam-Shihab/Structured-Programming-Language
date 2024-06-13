#include <stdio.h>
int main() {
int num, sum = 10, i =7, j = 2;
scanf("%d",&num);
switch(num) {
case 1:
case 2:
sum += --j*2;
i--;
case 3:
sum = ++i*j--;
break;
case 4:
sum *= i++/j--;
i=i%j;
default: break;
}
printf("%d %d %d",sum,i,j);
return 0;
}