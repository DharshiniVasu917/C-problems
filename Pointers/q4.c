#include<stdio.h>
#include<stdio.h>
int main (){
    char str[100];
    char str2[100];
    fgets(str,sizeof(str),stdin);
    char *p=str;
    char *s=str2;

    while(*p!='\0'){
        *s=*p;
         p++;
         s++;}
 
         *s='\0';

     printf("%s",str2);

     return 0;
}