#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STACK_SIZE 100

typedef char element;
typedef struct{
    element *data;
    int capacity;
    int top;
}StackType;

void push(StackType *s,element item){
    if(is_full(s)){
        s->capacity*=2;
        s->data=(element *)realloc(s->data,s->capacity*sizeof(element));
    }
    s->data[++(s->top)]=item;
}

int check_matching(const char *in){
    StackType s;
    char ch, open_ch;
    int i;
    int  n =strlen(in);
    init_stack(&s);

    for(i=0;i<n;i++){
        ch=in[i];
        switch(ch){
            
            case '(': case '[': case'{':
            push(&s,ch);
            break;

            case ')': case ']': case'}':
            if(is_empty(&s)) return 0;
            else{
                open_ch=pop(&s);
                if()
            }
        }
    }
}

