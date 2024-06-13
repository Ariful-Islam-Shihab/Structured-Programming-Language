#include<stdio.h>
int main() 
{int a = 17%7*5;
float b = (int)(17.0/5);
float c= 17/5;
int d = (a>b) && c;
printf("%d %f %f %d", a,b,c,d);
}