//check element one by one untial match found

#include <stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int key =30;
    int found=0;

    for (int i=0;i<5;i++){
        if (arr[i]==key){
            printf("found at the index=%d\n",i);
            found=1;
        }
    }
    if (!found){
        printf("no found");
    }
    return 0;
}