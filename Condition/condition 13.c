#include<stdio.h>
int main()
{
    float a,b;
    int c;
    scanf("%f %f",&a,&b);
    scanf("%d",&c);
    switch(c){
case 1:
    a=a+b;
    printf("Addition: %.0f",a);
    break;
case 2:
    a=a-b;
    printf("Subtraction: %.0f",a);
    break;
case 3:
    a=a*b;
    printf("Multiplication: %.0f",a);
    break;
case 4:{
    int d;
    scanf("%d",&d);
    switch(d){
case 1:
    a=(int)a/(int)b;
    printf("Quotient: %.0f",a);
    break;
case 2:
    a=(int)a%(int)b;
    printf("Remainder: %.0f",a);
    break;

    }}

        }



}
