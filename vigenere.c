#include<stdio.h>
#include<string.h>

int main(){
    int i=0,j=0,ch;
    char string[100]={0};     char pass[100]={0};   char check[100]={0};
    char small[100]={0};    char pass_string[100]={0};

    while(1){
        ch=getchar();
        if(ch=='\n') break;
        string[i]=ch;
        i++;
    }
    string[i]='\0';
    
    scanf("%s", pass);

    for(i=0;i<strlen(string);i++){
        if(string[i]<97 && string[i] != ' '){
            small[i]=string[i]+32;
            check[i]=1;
        }
        else small[i]=string[i];
    }
    for(i=0;i<strlen(string);i++){
        if(small[i]!=' '){
            pass_string[i]=small[i]+pass[j%strlen(pass)]-97;
            j++;
        }
        else{
            pass_string[i]=small[i];
        }
    }
    for(i=0;i<strlen(string);i++){
        if(check[i]==1) pass_string[i]-=32;
    }

    printf("%s", pass_string);
    
    return 0;
}