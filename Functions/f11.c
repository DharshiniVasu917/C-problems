#include<stdio.h>
int digit(int n){
    int count=0,r=0;
    for(int i=n;n!=0;n=n/10){
       r=n%10;
       count++;
    }
    printf("%d",count);
    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    digit(n);
    return 0;
}