#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char a[10000]={0};
    char a_1[10000]={0};   // 14자리수 
    char a_2[10000]={0};   // 15자리수 ~
    double a_3;            
    double a_4;

    char b[10000]={0};
    char b_1[10000]={0};
    char b_2[10000]={0};
    double b_3;
    double b_4;

    char c[10000]={0};
    char c_1[10000]={0};
    char c_2[10000]={0};
    double c_3;
    double c_4;
    char *c_5;
    char *c_6;

    char *s1 = malloc(sizeof(char) * 50);
    char *s2 = malloc(sizeof(char) * 50);

    int dec_1,dec_2,sign_1,sign_2;
    int count_1=0,count_2=0;

    scanf("%s%s", &a,&b);
    if(strlen(a)>14){
        for(int i=0;i<=14;i++){
            a_1[i]=a[i];
            b_1[i]=b[i];
            count_1++;
        }
        a_3=atof(a_1);
        b_3=atof(b_1);
        c_3=a_3+b_3;

        if(atof(&a_1[0])+atof(&b_1[0])>10){
            count_1++;
        }

        for(int i=14;a[i]!='\0';i++){
            a_2[i-14]=a[i];
            b_2[i-14]=b[i];
            count_2++;
        }
        
        if(atof(&a_2[0])+atof(&b_2[0])>10){
            count_2++;
            c_3++;
            c_5=ecvt(c_3,count_1,&dec_1,&sign_1);
            strcpy(s1,c_5);
            a_4=atof(a_2);
            b_4=atof(b_2);
            c_4=a_4+b_4;
            c_6=ecvt(c_4,count_2,&dec_1,&sign_1);
            for(int i=0;c_6[i]!='\0';i++){
                c_6[i]=c_6[i+2];
            }
            strcpy(s2,c_6);
        }

        strcat(s1,s2);
        printf("%s\n",s1);
    }
    else{
            a_3=atof(a);
            b_3=atof(b);
            c_3=a_3+b_3;
            printf("%.0lf",c_3);
    }


    return 0;
}


