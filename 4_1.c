#include<stdio.h>

void stack5(){
    printf("2\n");
}

void stack4(){
    stack5();
    printf("3\n");
}

void stack3(){
    stack4();
    printf("5\n");
}

void stack2(){
    stack3();
    printf("4\n"); 
}

void stack1(){
    stack2();
    printf("1\n");
}

int main(){
    stack1();
    return 0;
}