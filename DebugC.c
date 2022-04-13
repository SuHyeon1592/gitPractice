#include<stdio.h>

int main()
{
    double a=3.4;
    double b=0;

    printf("%lf\n",a);
    printf("%d\n",a);
    printf("%x\n",a);
    printf("%d\n", sizeof(a));

    b=3.41;
    
    printf("%lf\n",b);
    printf("%d\n",b);
    printf("%x\n",b);
    printf("%d\n", sizeof(b));

    return 0;


}