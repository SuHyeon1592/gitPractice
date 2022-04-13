#include<stdio.h>

int main(){

    int hour,minute,cook;

    scanf("%d%d%d", &hour,&minute,&cook);

    minute=cook+minute;
    hour=hour+minute/60;
    if(hour>23) hour=hour%24;
    minute=minute%60;

    printf("%d %d", hour, minute);
    
    return 0;
}