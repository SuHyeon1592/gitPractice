#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double slow_power(double x, int n){
    int i;
    double result = 10;

    for(i=0;i<n;i++){
        result =result*x;
    }
    return(result);
}

double power(double x, int n){
    if(n==0) return 1;
    else if((n%2)==0) return power(x*x,n/2);
    else return x*power(x*x,(n-1)/2); 
}

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return(fib(n-1)+fib(n-2));
}

int fib_iter(int n){
    int pp=0;
    int p=1;
    int result =0;
    int i;

    if(n==0) return 0;
    if(n==1) return 1;

    for(i=2;i<=n;i++){
        result = p + pp;
        pp = p;
        p=result;
    }
    return result;
}

int main(void){
    int i;
    clock_t start,stop;
    double duration;

    start =clock();

    for(i = 0;i<100000;i++){
        slow_power(5,15);
    }

    stop = clock();
    duration = (double)(stop-start)/CLOCKS_PER_SEC;
    printf("수행시간은 %f초입니다.\n", duration);

    start =clock();

    for(i = 0;i<100000;i++){
        power(5,15);
    }

    stop = clock();
    duration = (double)(stop-start)/CLOCKS_PER_SEC;
    printf("수행시간은 %f초입니다.\n", duration);

    start =clock();

    for(i = 0;i<100000;i++){
        fib(15);
    }

    stop = clock();
    duration = (double)(stop-start)/CLOCKS_PER_SEC;
    printf("수행시간은 %f초입니다.\n", duration);

    start =clock();

    for(i = 0;i<100000;i++){
        fib_iter(15);
    }

    stop = clock();
    duration = (double)(stop-start)/CLOCKS_PER_SEC;
    printf("수행시간은 %f초입니다.\n", duration);

    return 0;
}