#include<stdio.h>

typedef struct{
    int x;
    int y;
}point;

int main(){
    
    int test_case,r1,r2,min,max,distance;    
    point p1,p2;
    
    scanf("%d", &test_case);

    for(int i=0;i<test_case;i++){
        scanf("%d%d%d%d%d%d",&p1.x,&p1.y,&r1,&p2.x,&p2.y,&r2);
        
        if(r1<r2){
            min=r1;
            max=r2;
        }
        else{
            min=r2;
            max=r1;
        }
        distance=((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y));
        
        if(p1.x==p2.x && p1.y==p2.y && r1==r2) printf("-1\n");

        else if(distance<max*max){ // 한 원의 중심이 다른 원안에 존재할 때 
            if((max-min)*(max-min)>distance) printf("0\n"); // 접하지 않을 때
            else if((max-min)*(max-min)==distance) printf("1\n"); // 한점에서 접할 때
            else if((max-min)*(max-min)<distance) printf("2\n"); // 두 점에서 접할 때
        }
        else{   // 한 원의 중심이 다른 원밖에 존재할 때
            if(distance<(r1+r2)*(r1+r2)) printf("2\n");
            else if(distance==(r1+r2)*(r1+r2)) printf("1\n");
            else if(distance>(r1+r2)*(r1+r2)) printf("0\n");
        }
        
    }

    return 0;
}



