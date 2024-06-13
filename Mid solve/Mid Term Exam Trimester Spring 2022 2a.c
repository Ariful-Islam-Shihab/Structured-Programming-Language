#include<stdio.h>
int main()
{
int b;
scanf("%d", &b);
printf("Begin\n");
if (b>=5)
printf("UIU\n");
else if(b<=5)
printf("CSE\n");
else if ((b>=2)||(b<10))
printf("COMPUTER\n");
else if ((b>2)&&(b<=10))
printf("NICE\n");
else
printf("Bye\n");
printf("End");
}