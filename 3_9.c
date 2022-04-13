#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{

    char name[30];
    int age;
    double gpa;

}student;

int main(){

    int ch,i=0;

    student *s;

    s=(student *)malloc(sizeof(student));
    if(s==NULL){
        printf("메모리 부족");
        return 1;
    }

    while(1){
        ch=getchar();
        if(ch=='\n') break;
        (*s).name[i]=ch;
        i++;
    }

    scanf("%d%lf", &(*s).age,&(*s).gpa);

    (*s).name[i]='\0';

    printf("이름 :%s\n나이 :%d\n평균 :%.1lf\n", (*s).name,(*s).age,(*s).gpa);

    free(s);

    return 0;
}