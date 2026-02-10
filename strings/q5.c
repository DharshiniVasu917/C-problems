#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int n=0;
    while(str[n]!='\0'){
        n++;
    }
    int pal=1;
    for(int i=0;i<n/2;i++){
        if(str[i]==str[n-1-i]){
            pal=0;
            break;
        
        
    }
}
    if(pal==1){
                printf("Palindrome");
        }
       else
            {
            printf("Not Palindrome");
           }
    
    return 0;
}