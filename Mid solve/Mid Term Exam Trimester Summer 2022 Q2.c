#include <stdio.h>
int main() {
int num;
int sum = 0, i=0;
scanf("%d", &num);
while(num!=0){
	if(num>0){
		i++;
		sum+=num;
	}scanf("%d",&num);
}
float avg=sum*1.0/i;
printf("%f",avg);
return 0;
}