#include <stdio.h>
int main(){
    int n,temp,i;
    scanf("Enter the number of elements=%d",&n);

    int arr[n];

    for (i=0;i<n;i++)
    {
        scanf("arr=%d",&arr[i]);
    }
    for (i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}