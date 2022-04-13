#include<stdio.h>

typedef struct{
    char name[10];
    int age;
    double gpa;
}st;

int main(){
    
    st a={"kim",20,4.3};
    st b={"park",21,4.2};

    printf("%s / %d / %.1lf\n", a.name,a.age,a.gpa);
    printf("%s / %d / %.1lf", b.name,b.age,b.gpa);
    return 0;
}