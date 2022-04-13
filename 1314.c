#include<stdio.h>

int turn=0;

void hanoi_tower(int n,char a, char b, char c){
    
    if(n==1){
        turn++;
        printf("원판 1을 %c에서 %c로 옮긴다: %dturn\n",a,c,turn);
        
    }
    else{
        hanoi_tower(n-1,a,c,b);
        turn++;
        printf("원판 %d을 %c에서 %c로 옮긴다: %dturn\n ",n, a,c, turn);
        hanoi_tower(n-1,b,a,c);
    }
}

int main(){
    hanoi_tower(4,'A','B','C');
    return 0;
}