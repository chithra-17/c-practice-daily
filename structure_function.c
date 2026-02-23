//pass structure to function

#include<stdio.h>

struct student{
    int id;
    float marks;
};

void display(struct student s)
{
    printf("%d %.2f\n",s.id,s.marks);
}

int main()
{
    struct student s1={1,95.0};
    display(s1);
}