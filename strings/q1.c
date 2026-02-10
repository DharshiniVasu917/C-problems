#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
   fgets(str,sizeof(str),stdin);
    int n=0;
    while(str[n]!='\0'){
        n++;

    }
    printf("%d",n);
}