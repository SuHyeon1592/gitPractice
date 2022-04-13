#include<stdio.h>

int factorial(int n){
    int res;
    if(n<=1){
        return (1);
    }
    else{
        res=n*factorial(n-1);
    }
    return res;
}

int main(){

    int n;

    scanf("%d", &n);

    printf("%d",factorial(n));

    return 0;
}

