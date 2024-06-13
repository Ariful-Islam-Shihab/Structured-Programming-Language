#include<stdio.h>
int main()
{
int arr[][3] = {{4, 1, 7}, {5, 6, 12}, {3, 10, 11}};
int value = 0, i, j;
for (i = 0; i < 3; i++){
for (j = 0; j < 3; j++){
value = arr[i][j];
if (value % 2 == 1)
arr[i][j] = value + 1;
if (arr[i][j] % 2 == 0)
arr[i][j] = value * 2;
}
}
	for( i=0;i<3;i++){
		for( j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");
	}
}