#include<stdio.h>

int arr[10001];

void preimeNumberSeive(int Num){
    int n1,n2;
    int count=2;
    
    for(int i=2;i<=Num;i++){
        arr[i]=i;
    }
    for(int i=2;i<=Num;i++){
        for(int j=i+i;j<=Num;j+=i){
            arr[j]=0;
        }
    }
    
    for(int i=1;i<=Num;i+=2){
        
        if(arr[Num/2]!=0){      // num/2의 값이 소수일 때
            n1=n2=arr[Num/2];
            break;
        }

        else{                   // num/2의 값이 소수가 아닐 때
            
            if((Num/2)%2==0){   // num/2의 값이 짝수일 때
                n1=n2=Num/2;
                n1=n1-i;
                n2=n2+i;
                if(arr[n1]!=0 && arr[n2]!=0){
                    break;
                }
            }
            
            else{               // num/2의 값이 홀수일 때
                n1=n2=Num/2;
                n1=n1-count;
                n2=n2+count;
                if(arr[n1]!=0 && arr[n2]!=0){
                    break;
                }
                count=count=count+2;
            }       
            
        }
    }
    printf("%d %d\n", n1,n2);
}

int main(){
    int test_case;
    int num;

    scanf("%d", &test_case);

    for(int i=0;i<test_case;i++){
        scanf("%d", &num);
        preimeNumberSeive(num);
    }

    return 0;
}
