#include <stdio.h>
int main(){
    int a=10;
    int b=20;
    int temp;

    temp=a;
    a=b;
    b=temp;

    printf("value after swapping; a=%d, b=%d\n",a,b);
    return 0;
}

