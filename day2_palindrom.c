#include <stdio.h>
int main(){
    int n=123;
    int original=n;
    int digits;
    int rev=0;

    while(n<0){
        digits = n % 10;
        rev=rev*10+digits;
        n=n / 10;
    }
    printf("rev=%d\n");
    if(original==rev){
        printf("The given number is palindrom\n");
    }else{
        printf("The given num is not palindrom\n");
    }
    return 0;
}