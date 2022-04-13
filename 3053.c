#include<stdio.h>             

int main(){
    double radius;
    double pi=3.1415926535897;

    scanf("%lf", &radius);

    printf("%lf\n", pi*(radius*radius));
    printf("%lf", ((radius*2)*(radius*2))/2);

    return 0;
}