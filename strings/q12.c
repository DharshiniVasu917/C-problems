#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int n=0,count=0;
    while(str[n]!='\0'){
        if((str[n]>='a'&& str[n]<= 'z')||(str[n]>='A'&& str[n]<='Z')||(str[n]>=0 && str[n]<=9)){
        break;}
        else{
            count++;
        }
        n++;
    }
        printf("%d",count);
        return 0;
    
}