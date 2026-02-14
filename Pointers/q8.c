#include<stdio.h>
int main(){
    char str[100];
    char str2[100];
    scanf("%s",&str);
    scanf("%s",&str2);

    char *p=str;
    char *s=str2;
    while(*(p)!='\0'){
        p++;
    }
    while(*(s)!='\0'){
        *p=*s;
        p++;
        s++;
    }
    *p='\0';
    printf("%s",str);


}