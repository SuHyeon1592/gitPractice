#include<stdio.h>



void hanoi_towel(int n, char a,char b, char c){

    if(n<=1) printf("%c %c\n", a,c);

    else{
        hanoi_towel(n-1,a,c,b);
        printf("%c %c\n", a,c);
        hanoi_towel(n-1,b,a,c);
    }

}

int main(){

    int n,turn=0,two=1;
    
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        turn=turn+two;
        two=two*2;
    }

    printf("%d\n",turn);

    hanoi_towel(n,'1','2','3');

    return 0;
}