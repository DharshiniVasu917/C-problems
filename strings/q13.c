#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int index=-1;
    char s;
     scanf("%c",&s);
    for(int i=0;str!='\0';i++){
        if(s==str[i]){
        index=i;
         break;}
    }
    if(index==-1){
        printf("no elements found");
    }
    else{
         printf("%d",index);
        }
    }
   