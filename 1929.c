#include<stdio.h>

int a[1000001];

void primeNumberSieve(int m,int n){
    for(int i=2;i<=n;i++){
        a[i]=i;
    }
    for(int i=2;i<=n;i++){
        
        for(int j=i+i;j<=n;j+=i){
            a[j]=0;
        }
    }
    for(int i=m;i<=n;i++){
        if(a[i]!=0) printf("%d\n", a[i]);
    }
}

int main(){
    int M,N;
    scanf("%d%d", &M,&N);
    primeNumberSieve(M,N);
    return 0;
}