#include<stdio.h>

int main(){
    
    int x,y,w,h;
    int distance1,distance2;

    scanf("%d%d%d%d",&x,&y,&w,&h);

    distance1=x;
    if(x>w-x) distance1=w-x;
    distance2=y;
    if(y>h-y) distance2=h-y;

    if(distance1<distance2) printf("%d", distance1);
    else printf("%d", distance2);

    return 0;
}