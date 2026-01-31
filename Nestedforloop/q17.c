#include<stdio.h>
int main(){
    int i,space;
    char j;{
        for(i=1;i<=4;i++){
            for(space=1;space<4-i+1;space++){
                printf(" ");
            }
            for(j=0;j<=i+i;j++){
                printf("%c",65+j);
            }
            for(j=i-1;j>=0;j--){
                printf("%c",65+j);
            }
             printf("\n");

        }
       
    }
    return 0;

}