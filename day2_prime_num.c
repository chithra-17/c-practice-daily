//check wheather prime or not
#include <stdio.h>
int main(){
    int n=9;
    int isprime=1;
    if(n<=1){
        isprime=0;
    }else
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
        }
    }
    if(isprime=1){
        printf("The given number is prime");
    }else{
        printf("the given number is not prime");
    }
    return 0;

}