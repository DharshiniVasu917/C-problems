#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int n=0;
    int count=0;
    char *p=str;
    while(*p!='\0'){
    if(*p== ' '){
        count++;
    }
    p++;
    }
    printf("%d",count+1);
  return 0;

}