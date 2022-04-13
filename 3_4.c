#include<stdio.h>
#define rows 2
#define cols 2

void transpose(int A[rows][cols],int B[rows][cols]){
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            B[c][r]=A[r][c];
        }
    }
}
void print(int A[rows][cols]){
    printf("=====================\n");
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            printf("%d", A[r][c]);
        }
        printf("\n");
    }
    printf("======================\n");
}

int main(){
    int arr1[rows][cols]={{3,5}
                        ,{2,4}};
    int arr2[rows][cols];     
    transpose(arr1,arr2);
    print(arr1);
    print(arr2);

    return 0;              
}