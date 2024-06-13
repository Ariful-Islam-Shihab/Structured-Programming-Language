#include<stdio.h>
int main()
{
    char a;
    int i=1;
        scanf("%c",&a);

    while(a!='A'){
        printf("Input %d: %c\n",i,a);
        fflush(stdin);
        scanf("%c",&a);
        i++;
    }
}
