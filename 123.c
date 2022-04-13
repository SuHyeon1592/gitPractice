#include<stdio.h>

void change(int n1, int n2){
    int temp;
    
    temp=n1;
    n1=n2;
    n2=temp;

    return n1,n2;
}

int main(){
    int a,b;
    scanf("%d%d", &a,&b);

    printf("%d %d\n", a,b);

    change(a,b);

    printf("%d %d", a,b);

    return 0;
}