#include <stdio.h>
int main(){

int arr[5]={10,20,10,10,100}, size=5;
for(int i=0; i<size; i++){
for(int j=i+1; j<size; j++){
printf("%d ",j);
if(arr[i] == arr[j]){
arr[j] = arr[j+1];
size--;
j--;
}printf("%d %d %d %d %d %d\n",size,arr[0],arr[1],arr[2],arr[3],arr[4]);
}
}
}