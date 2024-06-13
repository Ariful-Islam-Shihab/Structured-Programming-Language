#include <stdio.h>
int main()
{
	int binary;
	scanf("%d",&binary);
	int decimal=0,i=0,k,bit=0;
	while(binary!=0){
		int temp=binary%10,p=1;
		if(temp==1){
			for(k=1;k<=i;k++){
        		p*=2;
			}
			bit++;
	    }
		decimal=decimal+p*temp;
		i++;
		binary=binary/10;
	}

	printf("Decimal: %d\n",decimal);
	printf("Contains %d one bits.\n",bit);
	return 0;
}