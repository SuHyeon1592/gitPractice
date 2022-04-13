#include<stdio.h>
#include<stdlib.h>

int main(){
    int test_case,k,n,sum=0;
    int *floor1;
    int *floor2;

    scanf("%d", &test_case);
    
    for(int i=0;i<test_case;i++){
        
        scanf("%d%d",&k,&n);
        
        floor1=(int *)malloc(sizeof(int)*n);
        floor2=(int *)malloc(sizeof(int)*n);
        
        for(int x=0;x<n;x++){
            floor1[x]=0;
            floor2[x]=0;
        }

        floor1[0]=1;
        floor2[0]=1;
        
            for(int j=1;j<=n;j++){
                floor1[j]=j+1;
            }
            
            for(int j=1;j<n;j++){
                sum=0;
                for(int m=0;m<=j;m++){
                    sum+=floor1[m];
                }
                floor2[j]=sum;
            }

            for(int y=2;y<k+1;y++){
                for(int j=1;j<n;j++){
                        sum=0;
                        for(int m=0;m<=j;m++){
                            sum+=floor2[m];
                        }
                        floor1[j]=sum;
                }
                for(int x=0;x<n;x++){
                    floor2[x]=floor1[x];
                }
            }
            
        if(k>0){
            printf("%d\n", floor2[n-1]);
        }
        else printf("%d\n", floor1[n-1]);
        
    }
    return 0;
}