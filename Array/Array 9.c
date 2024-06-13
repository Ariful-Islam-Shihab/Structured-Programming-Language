#include <stdio.h>
int main()
{
 
 int n,i=0,count=0;
 scanf("%d",&n);
 char a[n];
 scanf("%s",a);
 while(a[i]!='\0'){

 	if(a[i]=='a'|| a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='u'||a[i]=='U'||a[i]=='o'||a[i]=='o'){
 	 count++;
 	}i++;
 }
 printf("%d",count);
}