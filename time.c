#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sum(int n){
    if(n!=1) sum(n-1);
    printf("%d\n",n);
}

void unknown(){
    int ch;
    if((ch=getchar())!='\n'){
        unknown();
    }
    putchar();
}

void asterisk(int i){
    if(i>1){
        asterisk(i/2);
        asterisk(i/2);
    }
    printf("*");
}

int main(){
   unknown(){
    int ch;
    if((ch=getchar())!='\n'){
        unknown();
    }
    putchar();
}

    return 0;
}