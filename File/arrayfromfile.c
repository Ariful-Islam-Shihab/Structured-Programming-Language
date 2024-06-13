#include<stdio.h>
int main()
{
    FILE *array;
    array=fopen("Array.txt","r");
    int arr[20];
    int i=0;
    while(!feof(array)){
        fscanf(array,"%d",&arr[i]);
        i++;
    }
    for(int j=0;j<i;j++){
        printf("%d ",arr[j]);
    }
    fclose(array);
    return 0;
}