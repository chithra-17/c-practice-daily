#include<stdio.h>
int add(int *x,int *Y){
    return *x + *Y;
}
int main(){
      int a=10;
      int b=20;
      int addition=add(&a, &b);
      printf("%d",addition);
      return 0;
}