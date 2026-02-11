#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int n=0,count=0;
    while(str[n]!='\0'){
        if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u'||str[n]=='A'||str[n]=='E'||str[n]=='I'||str[n]=='O'||str[n]=='U')
         count++;
        n++;
    }
    printf("%d",count);
}