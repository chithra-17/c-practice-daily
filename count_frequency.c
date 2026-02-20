#include<stdio.h>
int main(){
    int n[11]={1,2,1,3,4,2,5,6,3,4,2};
    int count=0;
    int num;
    printf("enter the num=\n");
    scanf("%d\n",&num);

    for(int i = 0;i < 11;i++)
    {
        if (num==n[i]){
            count=count+1;
        }
    }
     printf("number of count=%d",count);
}