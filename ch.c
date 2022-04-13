#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    
    char a1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
    char a2[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'}; 
    char a3[26]={'k','x','v','m','c','n','o','p','h','q','r','s','z','y','i','j','a','d','l','e','g','w','b','u','f','l'};
    
    int i=0,k,length=0,ch=0;
    
    char string_0[30]={0}; char string_1[30]={0};  char string_2[30]={0};  char string_3[30]={0}; char string_4[30]={0};
    
    while(1){
        ch=getchar();
        if(ch=='\n') break;
        string_0[i]=ch;
        i++;
    }
    string_0[i]='\0';

    length=strlen(string_0);

    for(i=0;i<length;i++){
        if(string_0[i]<97 && string_0[i]!=32){
            string_1[i]=string_0[i]+32;
            string_4[i]=1;
        }
        else string_1[i]=string_0[i];
    }
    for(i=0;string_1[i]!='\0';i++){
        for(k=0;k<26;k++){
            if(string_1[i]==a1[k]){
                string_1[i]=k;
                break;
            }
        }
    }
    for(i=0;i<length;i++){
        for(k=0;k<26;k++){
            if(string_1[i]==' '){
                string_2[i]=' ';
            }
            if(string_1[i]==k){
                string_2[i]=a2[k];
                break;
            }
        }
    }
    for(i=0;i<length;i++){
        for(k=0;k<26;k++){
            if(string_2[i]==' '){
                string_3[i]=' ';
            }
            if(string_2[i]==a1[k]){
                string_3[i]=a3[k];
                break;
            }
        }
    }
    for(i=0;i<length;i++){
        if(string_4[i]==1){
            string_2[i]-=32;
            string_3[i]-=32;
        }
    }
    
    printf("평문 :%s\n", string_0);
    printf("암호문 :%s\n",string_2);
    printf("복호문 :%s\n",string_3);
    return 0;
}
