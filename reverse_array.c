#include<stdio.h>
int main(){
    int arr[4]={20,30,40,50};

    for (int i=3;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}