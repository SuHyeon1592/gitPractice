#include<stdio.h>

void star(int n){
    
    int blank;

    blank=n/3;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>blank && i<=blank*2 && j>blank && j<=blank*2) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}

int main(){

    int n;

    scanf("%d", &n);

    star(n);

    return 0;
}