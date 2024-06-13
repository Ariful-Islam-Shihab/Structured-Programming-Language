#include<stdio.h>
typedef struct{
    int id;
    int base;
    int height;
    float area;
}triangle;
int main()
{
  triangle tt[3];
  for(int i=0;i<3;i++){
    scanf("%d %d %d",&tt[i].id,&tt[i].base,&tt[i].height);
    tt[i].area=0.5*tt[i].base*tt[i].height;
  }
  for(int i=0;i<3;i++){
    printf("Area of %d = %f\n",tt[i].id,tt[i].area);
  }
    return 0;
}