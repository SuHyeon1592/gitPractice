#include<stdio.h>

typedef struct{
    int x;
    int y;
    int h;
}tri;

int main(){

    int max;
    tri res;

    while(1){
        scanf("%d%d%d", &res.x,&res.y,&res.h);
        
        if(res.x==0 && res.y==0 && res.h==0) break;

        max=res.x;

        if(max<res.y){      
            max=res.y;      
            if(max<res.h){      //res.h가 가장 클때
                max=res.h;
                if(res.x*res.x+res.y*res.y==res.h*res.h) printf("right\n");
                else printf("wrong\n");
            }

            else{               //res.y가 가장 클때
                if(res.x*res.x+res.h*res.h==res.y*res.y) printf("right\n");
                else printf("wrong\n");
            }
        }
        else if(max<res.h){     //res.h가 가장 클때
            max=res.h;
            if(res.x*res.x+res.y*res.y==res.h*res.h) printf("right\n");
            else printf("wrong\n");    
        }

        else{
            if(res.y*res.y+res.h*res.h==res.x*res.x) printf("right\n");
            else printf("wrong\n");
        }
        
    }

    return 0;
}