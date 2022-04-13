#include<stdio.h>

int main(){

    int t1,t2,t3,price,max;

    snanf("%d%d%d", &t1,&t2,&t3);

    max=t1;

    if(t1==t2 && t2==t3){
        price= 10000+t1*1000;
    }
    else if(t1==t2 || t1==t3 || t2==t3){
        if(t1==t2){
            price=1000+t1*100;
        }
        else if(t1==t3){
            price=1000+t1*100;
        }
        else{
            price=1000+t2*100;
        }
    }
    else{
        for(int i=0;i<3;i++){
            if(max<)
        }
    }


    return 0;

}