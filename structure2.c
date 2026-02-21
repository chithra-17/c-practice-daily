//structure with pointer
#include<stdio.h>
struct student{
    int id;
    float marks;
};
int main(){
    struct student s1={20,90.5};
    struct student *p=&s1;
    printf("%d\n",p->id);
    printf("%.2f",p->marks);
    return 0;
}