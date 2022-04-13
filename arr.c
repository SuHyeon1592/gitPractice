#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define row 3

int pass[]={3,5,1,6,4,2}; 
int restore[]={3,6,1,5,2,4};

char plaintext[row][6]={0}; 
char ciphertext[row][6]={0};
char deciphertext[row][6]={0};

void pass_arr(char (*arr1)[6],char (*arr2)[6]){
    for(int i=0;i<row;i++){
        for(int j=0;j<6;j++){
            arr2[i][j]=arr1[i][pass[j]-1];
        }
    }
}

void restore_arr(char (*arr1)[6],char (*arr2)[6]){
    for(int i=0;i<row;i++){
        for(int j=0;j<6;j++){
            arr2[i][j]=arr1[i][restore[j]-1];
        }
    }
}

int main(){
    int i=0,j=0,ch;
    char string[100]={0};

    while(1){
        ch=getchar();
        if(ch=='\n') break;
        string[i]=ch;
        i++;
    }
    string[i]='\0';
    
    for(i=0;i<row;i++){
        for(j=0;j<6;j++){
            plaintext[i][j]=string[j+i*6];
            if(string[i*6+j]=='\0') break;
        }
        if(string[i*6+j]=='\0') break;
    }
    printf("plaintext\n");
    for(i=0;i<row;i++){
        for(j=0;j<6;j++){
            printf("%c", plaintext[i][j]);
        }
        printf("\n");
    }
 
    pass_arr(plaintext,ciphertext);
    printf("cipphertext\n");
    for(i=0;i<row;i++){
        for(j=0;j<6;j++){
            printf("%c", ciphertext[i][j]);
        }
        printf("\n");
    }
    restore_arr(ciphertext,deciphertext);
    printf("decipphertext\n");
    for(i=0;i<row;i++){
        for(j=0;j<6;j++){
            printf("%c", deciphertext[i][j]);
        }
        printf("\n");
    }
    return 0;
}
