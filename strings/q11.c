#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int n=0;
    while(str[n]!='\0'){
        if(str[n]>='A'&& str[n]<='Z'){
            str[n]=str[n]+32;
        }
        n++;
    }
    printf("%s",str);
}