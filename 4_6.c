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

int is_full(StackType *s){
    return (s->top==(s->capacity-1));
}

void push(StackType *s,element item){
    if(is_full(s)){
        s->capacity*=2;
        s->data=(element *)realloc(s->data,s->capacity*sizeof(element));
    }
    s->data[++(s->top)]=item;
}

int is_empty(StackType *s){
    return (s->top==-1);
}

void init_stack(StackType *s){

    s->top=-1;
    s->capacity;
    s->data =(element *)malloc(s->capacity * sizeof(element));
}

element pop(StackType *s){
    if(is_empty(s)){
        fprintf(stderr,"스택 공백 에러\n");
        exit(1);
    }
    else return s->data[(s->top)--];
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
                if( (open_ch =='(' && ch != ')') ||  (open_ch =='[' && ch != ']') || (open_ch =='{' && ch != '}') ){
                    return 0;
                }
                break;
            }
        }
    }

    if(!is_empty(&s)) return 0;
    return 1;
}

int main(){

    char *p="{A[(i+1)] = 0;}";

    if(check_matching(p)==1){
        printf("%s 괄호 검사 성공\n",p);
    }
    else printf("%s 괄호 검사 실패\n",p);

    return 0;
}


