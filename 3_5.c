#include<stdio.h>
#include<stdlib.h>

#define MAX_TERMS 100

typedef struct{
    int row;
    int col;
    int value;
}ment;

typedef struct{
    ment data[MAX_TERMS];
    int rows;
    int cols;
    int terms;
}sparse;

sparse transpose2(sparse a){
    sparse b;
    
    int bindex;
    b.rows=a.cols;
    b.cols=a.rows;

    b.terms = a.terms;

    if(a.terms>0){
        bindex=0;
        for(int c=0;c<a.cols;c++){
            for(int i=0;i<a.terms;i++){
                if(a.data[i].col==c){
                    b.data[bindex].row=a.data[i].col;
                    b.data[bindex].col=a.data[i].row;
                    b.data[bindex].value=a.data[i].value;
                    bindex++;
                }
            }
        }
    }
    return b;
}

void print(sparse a){
    printf("=============================\n");
    for(int i=0;i<a.terms;i++){
        printf("(%d,%d,%d)\n", a.data[i].row,a.data[i].col,a.data[i].value);
    }
    printf("=============================\n");
}

int main(){
    /*sparse m={
        {{0,3,7},{1,0,9},{1,5,8},{3,0,6},{3,1,5},{4,5,1},{5,2,2}},
        6,
        6,
        7
    };
    */
    sparse m={
        {{0,2,4},{3,2,5}},
        6,
        6,
        2
    };

    sparse res;

    res=transpose2(m);
    print(res);

    return 0;
}