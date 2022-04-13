#include<stdio.h>
#include<stdlib.h>

int main(){
    int *arr;
    int N,M,total;

    scanf("%d%d",&N,&M);
    
    arr=(int *)malloc(sizeof(int)*N);
    
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }




    return 0;
}

1. 각 카드수를 오름차순으로 정렬
2. M을 3으로 나눈후 그 값과 근접한 3장의 카드를 선택
166.66666