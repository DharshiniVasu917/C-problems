#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    fgets(str1,sizeof(str1),stdin);
    int n=0;
    while(str1[n]!='\0'){
          str2[n]=str1[n];
        n++;
    }
     str2[n]='\0';
    printf("%s",str2);

}