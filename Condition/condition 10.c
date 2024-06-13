#include<stdio.h>
int main()
{
    float a,b;
    char c;
    scanf("%f %c %f",&a,&c,&b);

    switch(c){
case '+':
    a=a+b;
    printf("Addition: %.0f",a);
    break;
case '-':
    a=a-b;
    printf("Subtraction: %.0f",a);
    break;
case '*':
    a=a*b;
    printf("Multiplication: %.0f",a);
    break;
case '/':{
    if(b!=0){
     a=a/b;
     printf("Division: %f",a);
    }else
    printf("Division: Zero as divisor not valid!");

        }}



}


