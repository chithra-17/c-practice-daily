//create structure and print details

#include<stdio.h>
struct student {
    int id;
    float marks;
};
int main(){
    struct student s1={20,90.5};
    printf("%d \n",s1.id);
    printf("%.2f\n",s1.marks);
}
    