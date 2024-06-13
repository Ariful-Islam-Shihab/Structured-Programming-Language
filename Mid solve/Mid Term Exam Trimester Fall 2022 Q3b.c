#include<stdio.h>
int main()
{
	int i, j, n=4, count = 0;
for (i = 1; i <= n; ++i) {
for (j = 1; j <= n - i; ++j) {
if (count <= n - 1) {
++count;
}printf("%d\n",count);
}
count= 0;
}
}