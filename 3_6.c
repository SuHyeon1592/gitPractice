#include<stdio.h>
#define SIZE 3

void integers(int list[]){

    printf("3개의 정수를 입력하시오:");
    for(int i=0;i<SIZE;i++){
        scanf("%d",&list[i]);
    }
}

int sum(int list[]){
    
    int sum=0;
    for(int i=0;i<SIZE;i++){
        sum+=*(list+i);
    }
    return sum;
}

double Call(double n){
    if(n<=1) return 1;
    else{
        return (Call(n-1)+(1/n));
    }
}
int Cal2(int n) 
{
  if(n<1) return 1; 
  else return (Cal2(n-1)+1%n);
}

typedef struct{
    int real_number;
    int imaginary_number;
}complex;

complex complex_add(complex a,complex b){
    complex c;
    c.real_number = a.real_number + b.real_number;
    c.imaginary_number = a.imaginary_number + b.imaginary_number;

    return c;
}

int main(){
    complex a,b;
    complex_add(a,b);
    printf("%.1lf",Call(3));

    return 0;
}