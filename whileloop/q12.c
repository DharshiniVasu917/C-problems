#include<stdio.h>
int main(){
    int n,n1;
    scanf("%d",&n);
    int i=0,usage=0,surge=0;
    while(i<n){
        scanf("%d",&n1);
        if(n1>usage){
        usage=n1;}
        if (n1>5){
           surge++;
        }
        
        i++;
    }
    printf("Max Usage : %d\n",usage);
    printf("Surge Hours : %d",surge);
    return 0;
}