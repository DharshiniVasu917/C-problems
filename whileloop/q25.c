#include<stdio.h>
int main(){
    int n,n1,count=0,fraud=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&n1);
        if(n1>50000){
          count++;
        }}
        if(count>3){
            fraud=count;
            printf("Fraud Triggered at Attempt : %d ",fraud);
        }
        else{
            printf("Fraud Triggered at Attempt : Not triggered");
           
        }
          printf("High-Value Transactions: %d ",count);
    return 0;
}