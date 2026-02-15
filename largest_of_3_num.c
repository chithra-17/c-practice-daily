#include <stdio.h>
int main(){
    int a=30 , b=40 , c=10;
    if(a>b && a>c){
        printf("a is greater than b and c.\n");
    }else if(b>c){
        printf("b is greater than a and c\n");
    }else{
        printf("c is greater");
    }
    return 0;
}