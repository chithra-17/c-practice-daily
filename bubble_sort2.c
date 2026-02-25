#include<stdio.h>
int main(){
    int arr[5]={20,30,50,60,10};
    int temp;

    for (int i=0; i<5-1;i++){
        for (int j=0;j<5-1-i;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
}