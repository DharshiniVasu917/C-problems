#include<stdio.h>
int main(){
    int i;
    char j;
    for(i=1;i<=5;i++){
        for(j=65;j<=64+i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}