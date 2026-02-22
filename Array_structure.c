//Array structure
#include<stdio.h>
struct student {
    int id;
    float marks;
};

int main(){
    struct student s[2];
    for(int i=0;i<2;i++)
    {
        scanf("%d %.2f",&s[i].id,&s[i].marks);
    }
    for(int i=0;i<2;i++)
    {
        printf("%d %.2f",s[i].id,s[i].marks);
    }
}