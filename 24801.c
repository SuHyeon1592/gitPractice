#include<stdio.h>

int main(){

    int dice[3]={0};
    int price,max;

    for(int i=0;i<3;i++){
        scanf("%d", &dice[i]);
    }

    max=dice[0];

    if(dice[0]==dice[1] && dice[1]==dice[2]){
        price= 10000+dice[0]*1000;
    }
    else if(dice[0]==dice[1] || dice[0]==dice[2] || dice[1]==dice[2]){
        if(dice[0]==dice[1]){
            price=1000+dice[0]*100;
        }
        else if(dice[0]==dice[2]){
            price=1000+dice[0]*100;
        }
        else{
            price=1000+dice[2]*100;
        }
    }
    else{
       
        for(int i=0;i<3;i++){
            if(max<dice[i]) max=dice[i];
        }
        price=max*100;
    }

    printf("%d", price);

    return 0;
}